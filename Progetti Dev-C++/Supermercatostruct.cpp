//Powered by Valentin Ichim & Marco Giuseppini
//Librerie
/*
Fare un programma in C++ dove si inserisce un record con 2 campi(prezzo - codice), e controlli tramite il numero di soldi posseduti
quali articoli possono essere acquistati (codici), altrimenti stampare un messaggio di errore se i soldi sono inferiori rispetto al prezzo minimo.
*/
#include <iostream>
#include <string>
using namespace std;
//Inizializzazione Record
struct articolo{
	string codice;
	float prezzo;
};
//Inizializzazione variabili
articolo tabella[200]; //Tabella
int nprodotti = 0, n_prodotti = 0, n = 0;

int main (){
	while(n < 1){
		int op = 0;
		cout<<"\n Inserire un articolo (1)/ Stampa degli articoli che si possono comprare (2): \n";
		cin>>op;
		switch(op){
			case 1:
			riempimento();
			break;
			case 2:
			prm();
			break;
		}
	}
	return 0;
}


void riempimento(){
	cout << "Inserisci il codice dell'articolo e il suo prezzo: ";
	cin >> tabella[nprodotti].codice >> tabella[nprodotti].prezzo;
	nprodotti++;
}

void prm(){
	float prezzo_random;
	//Inserimento variabile da controllare
	cout << "Inserisci i soldi posseduti: ";
	cin >> prezzo_random;
	for (int i = 0; i < n_prodotti; i++)
		if (tabella[i].prezzo <= prezzo_random)
			cout << i+1 << ") " << tabella[i].codice;
	
}
