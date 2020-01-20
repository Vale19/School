CREATE DATABASE agenzia_di_viaggi;
CREATE TABLE cliente(
	id_cliente int(11),
	nome varchar(255),
	cognome varchar(255),
	PRIMARY KEY(id_cliente)
);
CREATE TABLE pacchetto(
	id_pacchetto int(11),
	nome varchar(255),
	PRIMARY KEY(id_pacchetto)
);
CREATE TABLE acquisto(
	id_acquisto int(11),
	data int(64),
	id_cliente_fk int(11),
	id_pacchetto_fk int(11),
	PRIMARY KEY(id_acquisto),
	FOREIGN KEY (id_cliente_fk) REFERENCES cliente(id_cliente),
	FOREIGN KEY (id_pacchetto_fk) REFERENCES pacchetto(id_pacchetto)
);
CREATE TABLE destinazione(
	id_destinazione int(11),
	clima varchar(255),
	id_pacchetto_fk int(11),
	PRIMARY KEY(id_destinazione),
	FOREIGN KEY (id_pacchetto_fk) REFERENCES pacchetto(id_pacchetto)	
);