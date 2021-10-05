
x = dlmread("C:/Users/dK/Desktop/ejemplo_2.txt", " ",0,0);
size(x)
%Extract Culumn 4 for time values
time=x(:,1);
%Extract Culumn 5 for Channel values
VI=x(:,2);
% Sampling Frequency, [Hz]
Fs=1000;
Fnyq = Fs/2;

% Cut-off Frequency 
Fc=100 % in Hz
% Create  Butterworth Low pass Filter order
order=10;
[b,a]=butter(order, Fc/Fnyq);
% Apply the filter to the input signal and plot input and output.
y=filter(b,a,VI);

figure(2)
subplot ( 4, 1, 1)
plot(time,VI);

subplot ( 4, 1, 2)
plot(time,y);

subplot ( 4, 1, 3)
plot(abs(fft(VI)));

subplot ( 4, 1, 4)
plot(abs(fft(y)));
