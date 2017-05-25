clc;
fs = 1000;
f1 = 100;
ti = 0 : 1/fs : 3-(1/fs);
x = sin(2*pi*f1*ti) + randn(size(ti));

fN1 = 80/(fs/2);
fN2 = 120/(fs/2);

b = fir1(100, [fN1 fN2]);
%figure(1)
%freqz(b)
y = filter(b, 1, x);

figure(2)
subplot ( 4, 1, 1)
plot(ti,x);

subplot ( 4, 1, 2)
plot(ti,y);

subplot ( 4, 1, 3)
plot(abs(fft(x)));

subplot ( 4, 1, 4)
plot(abs(fft(y)));
