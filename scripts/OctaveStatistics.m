#{
@name: OctaveStatistics.
@param string path: direccion de la señal a analizar.
@param int separador: separador de las columnas de datos(espacio,coma u otro).
@param int canales: cantidad de canales de la señal.
@param int canal: canal a analizar.
@param int leerDesde: fila desde la que se comenzara a leer el documento.
@param int fs: frecuencia de muestreo en KHz.
@param int [a,b]: intervalo de analisis de la señal.
#}

% Example
% OctaveStatistics("C:/Set1.csv","1","13","1","1","0","29999","1")
function OctaveStatistics(path,separador,leerDesde,canales,fs,a,b,canal)

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
L = length(X(a:b, canal));

fflush(stdout);
fprintf(stdout,'inicio ');

dato_mean = mean(X(a:b, canal));                    % Compute the mean of the elements of the vector x.
dato_median = median(X(a:b, canal));                % Compute the median value of the elements of the vector x.
dato_std = std(X(a:b, canal));                      % Standard deviation.
dato_var = var(X(a:b, canal));                      % Compute the variance of the elements of the vector x.
dato_rms = rms(X(a:b, canal));                      % Compute the Root Mean Square of the elements of the vector x.
dato_range_min = min(X(a:b, canal)); 
dato_range_max = max(X(a:b, canal)); 
dato_range = range(X(a:b, canal));                  % Return the range, i.e., the difference between the maximum and the minimum of the input data.

% Sending values to stdout
fprintf(stdout, '%f ', dato_mean);
fprintf(stdout, '%f ', dato_median);
fprintf(stdout, '%f ', dato_std);
fprintf(stdout, '%f ', dato_var);
fprintf(stdout, '%f ', dato_rms);
fprintf(stdout, '%f ', dato_range_min);
fprintf(stdout, '%f ', dato_range_max);
fprintf(stdout, '%f ', dato_range);

fprintf(stdout,'fin ');
  
 endfunction
