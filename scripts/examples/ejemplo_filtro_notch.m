
x = dlmread("C:/Users/dK/Desktop/ejemplo_2.txt", " ",0,0);
size(x)
# tempo na 4 coluna
time=x(:,1);
#plot (time)
%Extract Culumn 5 for Channel values
VI=x(:,2);
#plot(VI)
# Sampling Freqe
Fs=1/(time(2)-time(1))
FNy=Fs/2
[b,a]=pei_tseng_notch ( 50 / FNy, 40/FNy );
filtered = filter(b,a,VI);
clf
subplot ( 2, 1, 1)
plot(time,VI,";Signal;")
ylim([-.2 .2])
subplot (2, 1, 2 )
plot(time,filtered,";Filtered signal;")
ylim([-.2 .2])
xlabel('T (s)')
%print -dpng 'ECG_filtrado.png'xlabel('T (s)')   