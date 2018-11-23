#include <iostream>
#include <string>
#include <fstream>

/*
	Dato un file f1 contenente cognome ed età degli alunni scrivere un altro file che contenga il file f1 ordinato per età crescente.

*/

using namespace std;

struct alunno_base{
	string cognome;
	float eta;
};

alunno_base alunni[100];

int nall = 0;
void carica() {
	fstream f1;
	f1.open("inizio.txt");
	f1 >> alunni[nall].cognome >> alunni[nall].eta;
	
	while (!f1.eof()) {
		nall++;
		f1 >> alunni[nall].cognome >> alunni[nall].eta;
	}
}

void ordina(){
	alunno_base temp;
	for (int i = 0; i < nall-1; i++)
		for (int j = 0; j < nall-i-1; j++)
			if (alunni[j].eta > alunni[j+1].eta) {
				temp = alunni[j];
				alunni[j] = alunni[j+1];
				alunni[j+1] = temp;
			}
		
}

void scrivi() { 
	fstream f1;
	f1.open("fine.txt");
	for (int i = 0; i < nall; i++){
		f1 << alunni[i].cognome << " "<< alunni[i].eta << endl;
	}
}

int main () {
	carica();
	ordina();
	scrivi();
}
