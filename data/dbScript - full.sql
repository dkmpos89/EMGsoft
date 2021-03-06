CREATE TABLE "SESION" (
	"ID" INTEGER PRIMARY KEY  AUTOINCREMENT  NOT NULL , 
	"fechaInicio" DATETIME
	);

CREATE TABLE "PROYECTO" (
	"ID" INTEGER PRIMARY KEY  AUTOINCREMENT  NOT NULL , 
	"nombre" VARCHAR NOT NULL , 
	"fechaInicio" DATETIME NOT NULL , 
	"fechaTermino" DATETIME, 
	"idSesion" INTEGER,
	"descripcion" VARCHAR(1000),
	FOREIGN KEY(idSesion) REFERENCES SESION(ID)
	);

CREATE TABLE "ProyPac" (
	"idProyecto" INTEGER NOT NULL , 
	"idPaciente" INTEGER NOT NULL , 
	PRIMARY KEY ("idProyecto", "idPaciente"),
	FOREIGN KEY(idProyecto) REFERENCES PROYECTO(ID),
	FOREIGN KEY(idPaciente) REFERENCES PACIENTES(ID)
	);

CREATE TABLE "PACIENTES" (
	"RUT" VARCHAR PRIMARY KEY  NOT NULL , 
	"nombre" VARCHAR, 
	"apellido" VARCHAR, 
	"direccion" VARCHAR,
	"sexo" VARCHAR(16) NULL,
	"fecha_nacimiento" DATE NULL,
	"edad" INT NULL,
	"fecha_ingreso" VARCHAR(20) NULL,
	"peso" DOUBLE NULL,
	"estatura" INT NULL,
	"actividad" VARCHAR(16) NULL,
	"descripcion" VARCHAR(4500) NULL
	);
                  

CREATE TABLE "SIGNAL" (
	"ID" INTEGER PRIMARY KEY  NOT NULL , 
	"fs" INTEGER NOT NULL , 
	"idPaciente" INTEGER, 
	FOREIGN KEY(idPaciente) REFERENCES PACIENTES(ID)
	);

CREATE TABLE "ESTADISTICAS" (
	"ID" INTEGER NOT NULL , 
	"IDSignal" INTEGER NOT NULL , 
	PRIMARY KEY ("ID", "IDSignal"),
	FOREIGN KEY(IDSignal) REFERENCES Signal(ID)
	);