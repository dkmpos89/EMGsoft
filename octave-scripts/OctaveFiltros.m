#{
@name: menuOctave.
@param string path: direccion de la señal a analizar.
@param int separador: separador de las columnas de datos(espacio,coma u otro).
@param int canales: cantidad de canales de la señal.
@param int canal: canal a analizar.
@param int leerDesde: fila desde la que se comenzara a leer el documento.
@param int fs: frecuencia de muestreo en KHz.
@param string tipoFiltro : nombre del filtro a aplicar.
@param string orden : orden del filtro.
@param string fc1,fc2: parametros de entrada para cada filtro. fc = frecuencia de corte.
#}

function OctaveFiltros(path,separador,leerDesde,canales,fs,canal,orden,tipoFiltro,fc1,fc2)

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
 
 
% Transformacion las variables a entero.
canal=str2num(canal)+1;
fs=str2num(fs)*1000;
leerDesde=str2num(leerDesde);
orden=str2num(orden);
fc1=str2num(fc1);
fc2=str2num(fc2);

fN1 = fc1/(fs/2);   %frecuencias normalizadas 1
fN2 = fc2/(fs/2);   %frecuencias normalizadas 2

% Bloque de lectura del encabezado del archivo para posteriores modificaciones.
Header='';
if(leerDesde>0)    
    fid = fopen(path,'r');
    for i = 1:leerDesde
        str=fgetl(fid);
        if(i!=leerDesde)
            Header = strcat(Header,str,"\n");
        else
            Header = strcat(Header,str);    
        endif
    endfor
endif
% End ----> lectura de Header

% Lectura del sector donde estan los datos
X = dlmread(path,separador,leerDesde,0);

% Bloque de calculo y su posterior emision de los resultados.
fflush(stdout);
fprintf(stdout,'inicio ');

switch (tipoFiltro)

    case 'low'
        b = fir1(orden, fN1, tipoFiltro);
        y = filter(b, 1, X(:,canal));                

    case 'butter'
        [b,a] = butter(orden, fN1);
        y = filter(b, a, X(:,canal));

    case 'high'
        b = fir1(orden, fN1, tipoFiltro);
        y = filter(b, 1, X(:,canal));                    
                
    case 'pass'
        b = fir1(orden, [fN1 fN2], tipoFiltro);
        y = filter(b, 1, X(:,canal));                    

    case 'stop'
        b = fir1(orden, [fN1 fN2], tipoFiltro);
        y = filter(b, 1, X(:,canal));                    

    case 'notch'
        [b,a] = pei_tseng_notch (fN2 , fN1);
        y = filter(b, a, X(:,canal));   

    otherwise
        fprintf(stderr,'Filtro no encontrado\n');

endswitch

fprintf(stdout, '%f ', y);

% Reemplazo de la columna antigua por la nueva filtrada.
X(:,canal) = y;

% Bloque de escitura de los nuevos datos filtrados.
if(leerDesde>0) 
    dlmwrite (path, Header, "", 0, 0);
    dlmwrite (path, X, separador, 0, 0,'precision','%.10f','-append');  
else
    dlmwrite (path, X, separador, 0, 0,'precision','%.10f');  
endif
  
fprintf(stdout,'fin ');
  
endfunction
