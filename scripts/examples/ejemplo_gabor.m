f=greasy;  % Input test signal
fs=16000;  % The sampling rate of this particular test signal
a=10;      % Downsampling factor in time
M=200;     % Total number of channels, only 101 will be computed

c=dgtreal(f,{'hann',0.02*fs'},a,M);
%c=dgtreal(f,{'gauss',0.02*fs'},a,M);
size(f)
size(c)

dynrange=90; % 90 dB dynamical range for the plotting
plotdgtreal(c,a,M,fs);



%a = 10;
%M = 40;
%L=a*M;
%h=pherm(L,4);

%size(h)
%c = dgt(h,'gauss',a,M);
%size(c)

%figure(1);
%imagesc(abs(c).^2);

%figure(2);
%plotdgt(c,a,'dynrange',50);

