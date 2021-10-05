#{
@name: OctaveSpectrogram.
@param string path: direccion de la señal a analizar.
@param int separador: separador de las columnas de datos(espacio,coma u otro).
@param int canales: cantidad de canales de la señal.
@param int canal: canal a analizar.
@param int leerDesde: fila desde la que se comenzara a leer el documento.
@param int fs: frecuencia de muestreo en KHz.
@param int [a,b]: intervalo de analisis de la señal.
@param int lin,tfr,wlen: parametros para el Spectrograma 
#}

function OctaveSpectrogram(path,separador,leerDesde,canales,fs,a,b,canal,lin,tfr,wlen)
if(nargin!=11)
    fprintf(stderr,'Error, el número de parámetros debe ser 11 llegaron %d\n',nargin);    
    return
 endif

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
lin=str2num(lin);
tfr=str2num(tfr);
wlen=str2num(wlen);                

X = dlmread(path,separador,leerDesde,0);
fflush(stdout);
fprintf(stdout,'inicio ');

if (lin == 1)
  c_sgram = sgram(X(a:b,canal), fs, 'tfr', tfr, 'wlen', round(wlen/1000*fs), 'lin', 'nodisplay');
else
  c_sgram = sgram(X(a:b,canal), fs, 'tfr', tfr, 'wlen', round(wlen/1000*fs), 'nodisplay');
endif

fprintf(stdout, '%f ', c_sgram);
fprintf(stdout, '%d ', size(c_sgram));        

fprintf(stdout,'fin ');
  
 endfunction
