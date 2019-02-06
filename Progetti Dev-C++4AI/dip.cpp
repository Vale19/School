#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

/*
	Creare una classe "Dipendente" con 
	Attributi Private:
		1) Cognome
		2) Stipendio
	Attributi Public:
		1) Inserisci Dipendenti
		2) Leggi Cognome
		3) Leggi Stipendio
	
	Nel Menu:
	1) Inserisci Dipendente
	2) Stampa Attributi Dipendenti di seguito
*/

class dipendente{
	private:
		string cognome;
		float stipendio;
		 
	public:
		void ins_dip(string passcognome, float passstipendio){
			cognome = passcognome;
			stipendio = passstipendio;
		}
		string getcognome(){
			return cognome;
		}
		float getstipendio(){
			return stipendio;
		}
};

int main(){
	const int NDIP = 10;
	dipendente dipendenti[NDIP];
	int i = 0, sc;
	string cognome;
	float stipendio;
	
	
	
	do{
		cout << "\n1.Riempimento";
		cout << "\n2.Stampa attributi dipendenti\n";
		cin >> sc;
		system ("CLS");
		
		switch(sc){
			case 1:
			
				//for ( i = 0; i < NDIP; i++ ){
					cout << "Inserisci cognome e stipendio del " << i + 1 << " dipendente: \n";
					cin >> cognome >> stipendio;
					dipendenti[i].ins_dip(cognome, stipendio);
					i++;
					//system("CLS");
				//}
				break;
			case 2:
				
				cout << "Stampa dati dei dipendenti:\n";
				for(i = 0; i < NDIP; i++)
					cout << "Dipendente " << i + 1 << dipendenti[i].getcognome() << " ||  " << dipendenti[i].getstipendio() << endl;
					//cout << dipendenti[i].getcognome() << " ||  " << dipendenti[i].getstipendio() << endl;
				break;
		}
	}
	while(sc != 0);
	
}
