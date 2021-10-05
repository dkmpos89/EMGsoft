%x = dlmread("path", "delimitador",fila,columnas);
%x = dlmread("C:/Users/dK/Desktop/RAW.csv", ",",19,0);
x = dlmread("C:/Users/dcampos/Desktop/test 2.0.txt", "\t",13,0);

size(x);

time=x(:,1);
L = length(time);
n = 2^nextpow2(L);

Fs = 200;

Y = fft(x(:,2),n);
Yreal = fftreal(x(:,2),n);

f = Fs*(0:(n/2))/n;
P = abs(Y/n);


subplot ( 2, 1, 1)
plot(time,x(:,2),";Signal;")
subplot (2, 1, 2 )
plot(f,P(1:n/2+1),";Filtered signal;")

  