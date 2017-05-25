#{
@name: menuOctave.
@param string path: direccion de la señal a analizar.
@param int separador: separador de las columnas de datos(espacio,coma u otro).
@param int leerDesde: fila desde la que se comenzara a leer el documento.
@param int canales: cantidad de canales de la señal.
@param int fs: frecuencia de muestreo en KHz.
@param int [a,b]: intervalo de analisis de la señal.
@param int canal: canal a analizar.
@param string analisis : nombre del analisis a utilizar.
@param string param1: parametro de funcion 1. (puede ser lo que necesite la funcion).
@param string param2: parametro de funcion 2. (puede ser lo que necesite la funcion).
@param string param3: parametro de funcion 3. (puede ser lo que necesite la funcion).
#}

function menuOctave(path,separador,leerDesde,canales,fs,a,b,canal,analisis,param1,param2,param3)

% ============== lee el archivo ya sea .txt o .csv ========================%
if(separador=='0')
    separador=' '; % Espacios
endif
if(separador=='1')
    separador=','; % Comas
endif
if(separador=='2')
    separador=';'; % Puntos y Comas
endif
if(separador=='3')
    separador='\t'; % Tabulaciones
endif
%========================= Fin de separadores =============================%
 
%%transforma las variables a entero
canal=str2num(canal)+1;
fs=str2num(fs)*1000;
a=str2num(a)+1;
b=str2num(b);
leerDesde=str2num(leerDesde);

X = dlmread(path,separador,leerDesde,0);
t = X(a:b, 1);
x = X(a:b, canal);


fflush(stdout);
fprintf(stdout,'inicio ');

 switch (analisis)
    
    case 'histf'
            y = dft(x);
            y = abs(y.^2);
            [nn,xx] = hist(y);
            fprintf(stdout, '%f ', nn);
            fprintf(stdout, '%f ', xx);
            fprintf(stdout, '%f ', size(nn));            
    
    case 'histc'            
            [nn,xx] = hist(x);
            fprintf(stdout, '%f ', nn);
            fprintf(stdout, '%f ', xx);
            fprintf(stdout, '%f ', size(nn));

    case 'movingrms'
            %x = normalize(x,'rms')/fs;
            param1 = str2num(param1);
            param2 = str2num(param2);
            mrms = movingrms(x, param1, param2, fs);
            fprintf(stdout, '%f ', mrms);
    
    case 'meanfreq'
            param1 = str2num(param1);
            param2 = str2num(param2);
            mx = mean(x);
            x = x - mx;
            % parametros por defecto en caso de error.
            if(param1<param2)
                fprintf(stderr,'Error, windows_length menor que windows_overlap');
                return
            endif
            % incremento por interaciones 
            incr = (param1-param2)*fs;
            % tamaño de la señal
            tam = round(length(x));
            % total de iteraciones segun fs, param1=windows_length y param2=windows_overlap
            niter = round(tam/((param1-param2)*fs));
            % Time range
            time = [0:(param1-param2):(roundb(tam/fs)-(param1-param2))];

            % calculo de la frecuencia media por intervalos con valores iniciales para el rango aa<->bb
            aa = 1;
            bb = param1*fs;

            L = length(x);          % Window length
            n = pow2(nextpow2(L));  % Transform length
            f = (0:n/2-1)*(fs/n);   % Frequency range

            for i = 1:niter
                y = fft(x(aa:bb),n);    % FFT            
                y = abs(y.^2);          % raw power spectrum density
                y = y(1:n/2);
                [v,k] = max(y);         % find maximum
                mfq(i) = f(k);          % max freq estimada se almacena en vector de resultados

                % Siguientes rangos.... +incr 
                aa = aa+incr-1;
                bb = bb+incr;
                if(bb>tam) 
                    bb=tam; % b no debe ser mayor que el tamaño del vector o se saldra de los limites
                endif
            endfor
            fprintf(stdout, '%f ', time);
            fprintf(stdout, '%.10f ', mfq);

    otherwise
        fprintf(stderr,'Error al calcular el analisis: %s\n', analisis);

endswitch
    fprintf(stdout,'fin ');
  
 endfunction
