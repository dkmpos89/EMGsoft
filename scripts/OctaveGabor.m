#{
@name: OctaveSpectrogram.
@param string path: direccion de la señal a analizar.
@param int separador: separador de las columnas de datos(espacio,coma u otro).
@param int canales: cantidad de canales de la señal.
@param int canal: canal a analizar.
@param int leerDesde: fila desde la que se comenzara a leer el documento.
@param int fs: frecuencia de muestreo en KHz.
@param int [a,b]: intervalo de analisis de la señal.
@param string wg: Tipo de venta a usar en la transformada.
@param int ag,M,tipo: parametros para la transformada de Gabor 
#}

function OctaveGabor(path,separador,leerDesde,canales,fs,a,b,canal,wg,ag,M,tipo,aa,dynrange)
if(nargin!=14)
    fprintf(stderr,'Error, el número de parámetros debe ser 14 llegaron %d\n',nargin);    
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
ag=str2num(ag);
M=str2num(M);
tipo=str2num(tipo);
aa=str2num(aa);
dynrange=str2num(dynrange);


X = dlmread(path,separador,leerDesde,0);
fflush(stdout);
fprintf(stdout,'inicio ');

	
% Guardando datos del grafico %
figure(1,'visible','off');
if(tipo==0)
	c = dgtreal(X(a:b,canal), {wg, ag}, aa, M);	
	wdata = plotdgtreal(c,aa,M,fs,dynrange);
else
	c = dgt(X(a:b,canal), {wg, ag}, aa, M);
	wdata = plotdgt(c, ag, fs, dynrange);
endif



fprintf(stdout, '%f ', wdata);
fprintf(stdout, '%d ', size(wdata)); 

fprintf(stdout,'fin ');
  
 endfunction
