function normSignal(path,separador,leerDesde,canal)
  
  canal=str2num(canal)+1;
  leerDesde = str2num(leerDesde);
  signal = dlmread(path,separador,leerDesde,canal);
  
  fflush(stdout);
  fprintf(stdout,'inicio ');

  tipoNorm = 'rms';
	signal = normalize(signal,tipoNorm);
	fprintf(stdout,'rms ');
	fprintf(stdout, '%f ', signal );
	fprintf(stdout,'rms ');
  
	tipoNorm = 'energy';
	signal = normalize(signal,tipoNorm);
	fprintf(stdout,'energy ');
	fprintf(stdout, '%f ', signal );
	fprintf(stdout,'energy ');
  
	tipoNorm = '1';
	signal = normalize(signal,tipoNorm);
	fprintf(stdout,'norm ');
	fprintf(stdout, '%f ', signal );
	fprintf(stdout,'norm ');
  

  fprintf(stdout,'fin ');

endfunction
