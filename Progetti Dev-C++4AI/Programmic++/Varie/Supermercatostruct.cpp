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
	int numeroprodotti;
};

//Inizializzazione variabili
articolo tabella[200]; //Tabella
int nprodotti = 0;

//Prototipazione
void riempimento ();//Prototipazione della procedura di riempimento
void prm ();//Prototipazione della procedura stampa del codice
void tot();


int main (){
	int op = 0;
	while (true) {
		cout<<"Inserire un articolo (1)/ Stampa degli articoli che si possono comprare (2)/ (3) stampa il totale / Uscire dal programma (4): \n";
		cin>>op;
		switch(op){
			case 1:
				riempimento ();
				break;
			case 2:
				prm ();
				break;
			case 4:
				return 0;
				break;
			case 3:
				tot();
				break;
		}
	}
	return 0;
}

//Procedure
void riempimento(){
	cout << "Inserisci il codice dell'articolo, il numero disponibile in magazzino e il suo prezzo: ";
	cin >> tabella[nprodotti].codice >> tabella[nprodotti].numeroprodotti >> tabella[nprodotti].prezzo;
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
			cout << tabella[i].codice << endl;
			p++;
		}
	if(p == 0)
		cout<<"\nErrore... purtroppo il tuo budget non ti permette di acquistare nessun articolo...\n\n";
	
}

void tot(){
	float tot = 0;
	for (int i = 0;  i < nprodotti; i++) {
		tot += tabella[i].prezzo * tabella[i].numeroprodotti;
	}
	cout << "Tot: " << tot << endl;
}
