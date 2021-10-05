#{
@name: OctaveFourier.
@param string path: direccion de la señal a analizar.
@param int separador: separador de las columnas de datos(espacio,coma u otro).
@param int canales: cantidad de canales de la señal.
@param int canal: canal a analizar.
@param int leerDesde: fila desde la que se comenzara a leer el documento.
@param int fs: frecuencia de muestreo en KHz.
@param int [a,b]: intervalo de analisis de la señal.
@param tipo : tipo de fourier.
#}

function OctaveFourier(path,separador,leerDesde,canales,fs,a,b,canal,tipo)

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
L = length(X(a:b,canal));
n = 2^nextpow2(L);
f = fs*(0:(n/2))/n;

fflush(stdout);
fprintf(stdout,'inicio ');

if (tipo=='0')
	sig = dft(X(a:b,canal),n);
	y = abs(sig);
	fprintf(stdout, '%f ', y(1:n/2+1));
else
	sig = fft(X(a:b,canal),n);
	y = abs(sig/n);
	fprintf(stdout, '%f ', y(1:n/2+1));
endif


fprintf(stdout,'fin ');
  
endfunction
