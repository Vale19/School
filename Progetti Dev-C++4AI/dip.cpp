#include <iostream>
#include <string>
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
	int i, sc;
	
	
	cout << "\n1.Riempimento\n";
	cout << "\n2.stampa attributi dipendenti\n";
	cin >> sc;
	
	switch(sc){
			string cognome;
			float stipendio;
		case '1':
			
			for ( i = 0; i < NDIP; i++ ){
			cout << "Inserisci cognome e stipendio del " << i + 1 << " dipendente: \n";
			cin >> cognome >> stipendio;
			dipendenti[i].ins_dip(cognome, stipendio);
			}
			break;
		case '2':
			cout << "Stampa dati del dipendente:\n";
			for(i = 0; i < NDIP; i++){
				dipendenti[i].getcognome(); 
				dipendenti[i].getstipendio();
			}
			break;
	}
}

