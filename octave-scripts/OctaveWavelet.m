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

function OctaveWavelet(path,separador,leerDesde,canales,fs,a,b,canal,Fwav,JJ,dynr,tipo,scale,costFun)
if(nargin!=14)
    fprintf(stderr,'Error, el número de parámetros debe ser 12 llegaron %d\n',nargin);    
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
JJ=str2num(JJ);
dynr=str2num(dynr);

X = dlmread(path,separador,leerDesde,0);
fflush(stdout);
fprintf(stdout,'inicio ');

if ( strcmp(tipo, 'fwt') )
	[c, info] = fwt(X(a:b,canal), Fwav, JJ);
elseif( strcmp(tipo, 'wfbt') )
    [c, info] = wfbt(X(a:b,canal), {Fwav,JJ,'full'});
elseif( strcmp(tipo, 'wpbest') )
    [c, info] = wpbest(X(a:b,canal),Fwav,JJ,'cost',costFun);
elseif( strcmp(tipo, 'wpfbt') )
    [c, info] = wpfbt(X(a:b,canal), {Fwav,JJ,'full'});
elseif( strcmp(tipo, 'dtwfbreal') )
    [c, info] = wpfbt(X(a:b,canal), {Fwav,JJ,'full'});
elseif( strcmp(tipo, 'dtwfb') )
    [c, info] = wpfbt(X(a:b,canal), {Fwav,JJ,'full'});
else
    fprintf(stdout, 'Wavelet Method is incorrect');
endif


% Guardando datos del grafico %
figure(1,'visible','off');
wdata = plotwavelets(c, info, fs, 'dynrange', dynr, scale);

fprintf(stdout, '%f ', wdata);
fprintf(stdout, '%d ', size(wdata));        

fprintf(stdout,'fin ');
  
 endfunction