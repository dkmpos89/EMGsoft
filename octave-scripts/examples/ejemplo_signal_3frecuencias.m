ti = 0:0.001:3;
x = 1*sin(50*2*pi*ti(1,1:1000));
y = 2*sin(200*2*pi*ti(1,1001:2000));
z = 3*sin(150*2*pi*ti(1,2001:3000));

filename = "data.txt";
fid = fopen (filename, "w");
for i = 1:1000
  fprintf(fid, "%f ", ti(i));
  fprintf(fid, "%f\n", x(i));
endfor

cont = 0;
for i = 1001:2000
  fprintf(fid, "%f ", ti(i));
  fprintf(fid, "%f\n", y(++cont));
endfor

cont = 0;
for i = 2001:3000
  fprintf(fid, "%f ", ti(i));
  fprintf(fid, "%f\n", z(++cont));
endfor

fclose (fid);




f = greasy;  % Input test signal
filename2 = "databat.txt";
fid2 = fopen (filename2, "w");

fprintf(fid2, "%f\n", size(f));
cont=0;
for j = 1:size(f)
  fprintf(fid2, "%f ", j/16000);
  fprintf(fid2, "%f\n", f(++cont));
endfor
fclose(fid2);

%figure(1);
%plot(t,y); 
%hold on;
%plot(tt,x);


%figure(2);
%fou = fftreal(x);
%stem(abs(fou));