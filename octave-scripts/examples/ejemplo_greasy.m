figure(1)
plot((1:5880)/16000,greasy);
xlabel('Time (seconds)');
ylabel('Amplitude');
figure(2)
plotfftreal(fftreal(greasy),16000,90);
figure(3)
sgram(greasy,16000);

%X=(0: 1/16000 : 5880/16000);
%file = fopen("greasy.csv", "w+");
%fprintf(file, "%d\n", X);
%fclose(file);

