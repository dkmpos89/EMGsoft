
separador = ';';
path = 'C:/Users/diego.campos/Documents/GitHub/EGMsoft/ejemplos/greasy.csv';
canal = 2;
leerDesde = 0;
tipoNorm = 'rms';


signal = dlmread(path, separador, leerDesde, 0);

figure(1)
plot(signal(:,1), signal(:,2))

normSignal('C:/Users/diego.campos/Documents/GitHub/EGMsoft/ejemplos/greasy.csv','2','0','1','rms');
signalNorm = dlmread(path, separador, leerDesde, 0);

figure(2)
plot(signalNorm(:,1), resultNormSignal(:,2))
