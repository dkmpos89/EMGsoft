#{
@name: normSignal
@param string path: direccion de la señal a analizar.
#}
 
function normSignal(path, separador, leerDesde, canal, tipoNorm)

% =============== carga del Separador del archivo  ========================%
lista_separadores = [' ' ',' ';' '\t'];
separador = lista_separadores(str2num(separador)+1);
%========================= Fin de separadores =============================%


% Transformacion las variables a entero.
canal=str2num(canal)+1;
leerDesde=str2num(leerDesde);

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
X = dlmread(path, separador, leerDesde, 0);

% Bloque de calculo y su posterior emision de los resultados.
fflush(stdout);
fprintf(stdout,'inicio ');

resultNorm = normalize(X(:, canal), tipoNorm);

fprintf(stdout, '%f ', resultNorm);

% Reemplazo de la columna antigua por la nueva filtrada.
X(:,canal) = resultNorm;

% Bloque de escitura de los nuevos datos filtrados.
if(leerDesde>0) 
    dlmwrite (path, Header, "", 0, 0);
    dlmwrite (path, X, separador, 0, 0,'precision','%.10f','-append');  
else
    dlmwrite (path, X, separador, 0, 0,'precision','%.10f');  
endif
  
fprintf(stdout,'fin ');
  
endfunction
