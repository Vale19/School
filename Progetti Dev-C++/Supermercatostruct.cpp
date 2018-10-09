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
void riempimento ();//Prototipazione della procedura di riempimento
void prm ();//Prototipazione della procedura stampa del codice
int main (){
	int op = 0;
	while (n < 1) {
		cout<<"Inserire un articolo (1)/ Stampa degli articoli che si possono comprare (2)/ Uscire dal programma (3): \n";
		cin>>op;
		switch(op){
			case 1:
				riempimento ();
				break;
			case 2:
				prm ();
				break;
			case 3:
				n++;
				break;
		}
	}
	return 0;
}

//Procedure
void riempimento(){
	cout << "Inserisci il codice dell'articolo e il suo prezzo: ";
	cin >> tabella[nprodotti].codice >> tabella[nprodotti].prezzo;
	nprodotti++;
}

void prm(){
	float budget, p = 0;
	//Inserimento variabile da controllare
	cout << "Inserisci i soldi posseduti: ";
	cin >> budget;
	cout<<"\nCon questo budget potrai acquistare i seguenti articoli:\n";
	for (int i = 0; i < nprodotti; i++)
		if (tabella[i].prezzo <= budget){
			cout << i+1 << ") " << tabella[i].codice << endl;
			p++;
		}
	if(p == 0)
		cout<<"\nErrore... purtroppo il tuo budget non ti permette di acquistare nessun articolo...\n\n";
	
}
