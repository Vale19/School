//Powered by Valentin Ichim <3

#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>

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
	string cognome, c;
	float stipendio, sti_min;
	float n_sti; //Nuovo Stipendio
	fstream f1;
	
	
	
	do{
		cout << "\n1. Riempimento";
		cout << "\n2. Stampa attributi dipendenti";
		cout << "\n3. Cambia stipendio di un dipendente";
		cout << "\n4. Salvataggio su File\n";
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
					if(i < 9)
						cout << "Dipendente " << i + 1 << " " << dipendenti[i].getcognome() << "  ||  " << dipendenti[i].getstipendio() << endl;
					else
						cout << "Dipendente " << i + 1 << " " << dipendenti[i].getcognome() << " ||  " << dipendenti[i].getstipendio() << endl;
					//cout << dipendenti[i].getcognome() << " ||  " << dipendenti[i].getstipendio() << endl;
				break;
			/*case 3: 
				cout << "Inserisci il cognome del dipendente [0->9]\n";
				cin >> c;
				cout << "Quale sara' il nuovo stipendio del dipendente? \n";
				cin >> n_sti;
				f1.open("C:\\Users\\Valentin\\Desktop\\dip.txt", ios :: out);C:\\Users\\N10_4A\\Desktop\\dip.txt
				for(i = 0; i < NDIP; i++){
					if(dipendenti[i].getcognome() == c)
						dipendenti[i].getstipendio() = n_sti;
				}
				break;*/
			case 4:
				cout << "Inserisci uno stipendio minimo: \n";
				cin >> sti_min;
				f1.open("C:\\Users\\Valentin\\Desktop\\dip.txt", ios :: out);
				for(i = 0; i < NDIP; i++){
					if(dipendenti[i].getstipendio() > sti_min){
						f1 << dipendenti[i].getcognome() << " " << dipendenti[i].getstipendio() << endl;
					}
				}
				f1.close();
				cout << "\n--- Salvataggio effettuato ---\n";
		}
	}
	while(sc != 0);
	
}
