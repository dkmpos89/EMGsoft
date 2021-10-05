CREATE TABLE IF NOT EXISTS pacientes (
                  rut VARCHAR(12) NOT NULL primary key,
                  nombre VARCHAR(20) NULL,
                  apellido VARCHAR(20) NULL,
                  direccion VARCHAR(45) NULL,
                  sexo VARCHAR(16) NULL,
                  fecha_nacimiento DATE NULL,
                  edad INT NULL,
                  fecha_ingreso VARCHAR(20) NULL,
                  peso DOUBLE NULL,
                  estatura INT NULL,
                  actividad VARCHAR(16) NULL,
                  descripcion VARCHAR(4500) NULL )
                  );

CREATE TABLE IF NOT EXISTS proyecto (
                   ID INTEGER PRIMARY KEY AUTOINCREMENT,
                   nombre VARCHAR(50) NULL,
                   fecha DATE NULL,
                   descripcion VARCHAR(4500) NULL 
                   );


CREATE TABLE IF NOT EXISTS sesion (
                   ID INTEGER PRIMARY KEY AUTOINCREMENT,
                   rut VARCHAR(10) NOT NULL,
                   idproyecto INT NOT NULL,
                   fecha DATE NULL,
                   CONSTRAINT fk_sesion_pacientes FOREIGN KEY (rut) REFERENCES pacientes (rut),
                   CONSTRAINT fk_sesion_proyecto FOREIGN KEY (idproyecto) REFERENCES proyecto (ID) 
                   );


CREATE TABLE IF NOT EXISTS signal (
                 ID INTEGER PRIMARY KEY AUTOINCREMENT,
                 idsesion INT NOT NULL,
                 path VARCHAR(200) NULL,
                 fs VARCHAR(10) NULL,
                 canales VARCHAR(10) NULL,
                 leerDesde VARCHAR(10) NULL,
                 separador VARCHAR(5) NULL,
                 CONSTRAINT fk_signal_sesion1 FOREIGN KEY (idsesion) REFERENCES sesion (ID) 
                 );

CREATE TABLE IF NOT EXISTS comentarios (
                 ID INTEGER PRIMARY KEY AUTOINCREMENT,
                 idsesion INT NOT NULL,
                 comentario VARCHAR(4500) NULL,
                 fecha_comentario DATE NULL,
                 CONSTRAINT fk_comentarios_sesion1 FOREIGN KEY (idsesion) REFERENCES sesion (ID) 
                 );


insert into pacientes('rut','nombre', 'apellido','direccion','sexo','fecha_nacimiento','edad','fecha_ingreso','peso','estatura','actividad','descripcion')
            values('17.666.555-K','Diego','Campos','Linares','Masculino','28-08-1988',28,'dom mayo 15 2016',75,173,'Físico Activo','Esta es informacion extra para la medicion del software');

insert into pacientes('rut','nombre', 'apellido','direccion','sexo','fecha_nacimiento','edad','fecha_ingreso','peso','estatura','actividad','descripcion')
       values('18.777.666-5','Romina','Rodriguez','Linares','Femenino','20-08-1987',27,'dom mayo 15 2016',50,160,'Ninguno','Esta es informacion extra para la medicion del software');
