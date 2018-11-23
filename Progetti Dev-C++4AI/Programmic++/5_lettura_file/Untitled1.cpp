#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

struct base_prodotto {
	string codice;
	string tipo;
	float prezzo;
};

base_prodotto prodotto[500];
float lav[500], frig[500];
int nlav = 0, nfrig = 0;

int main() {
	/*
	switch (_gethar()) {
		case '1';
		break;
	}
	*/
}

int carica() {
	fstream f1;
	f1.open(dati.txt);
	int i = 0;
	f1 >> prodotto[i].codice >> prodotto[i].tipo >> prodotto[i].prezzo;
	
	while (!f1.eof()){
		i++;
		f1 >> prodotto[i].codice >> prodotto[i].tipo >> prodotto[i].prezzo;	
	}
	
	return i;
}

void dump(int i){
	cout << prodotto[i].codice << " | " << prodotto[i].tipo << " | " << prodotto[i].prezzo << endl;
}

void categoria(int nprod, string tipo) {
	int nprodtipo = 0;
	float max = prodotto[0].prezzo;
	for (int i = 0; i < nprod; i++)
		if (prodotto[i].tipo == tipo) {
			nprodtipo++;
			if (max < prodotto[i].prezzo)
				max = prodotto[i].prezzo;
		}
	
	cout << "max, nprodtipo: " << max << nprodtipo;
}

void crearray(int nprod){
	for (int i = 0; i < nprod; i++) {
		if (prodotto[i].tipo == "frigorifero") {
			frig[nfrig] = prodotto[i].prezzo;
		} else if (prodotto[i].tipo == "lavatrice") {
			lav[nlav] = prodotto[i].prezzo;
		}
	}
}

void ordina(int nprod){
	base_prodotto temp;
	
	for (int i = 0; i < nprod-1; i++)
		for (int j = 0; j < nprod-1-i; j++){
			temp = prodotto[i];
			prodotto[i] = prodotto[i+1];
			prodotto[i+1] = temp;
		}
	
	for (int i = 0; i < nprod; i++)
		dump (i);
}

void conta(int nprod) {
	int nuguali = 0;
	for (int i = 0; i < nlav; i++)
		for (int j = 0; j < nfrig; j++)
			if (lav[i] == frig[j])
				nuguali++;
				
	cout << "nuguali" << nuguali;
}
