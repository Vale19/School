//Dichiarazione Librerie

#include <iostream>
#include <string>

/*
	Sessione prenotazione visite mediche
	Menu:
	
	1) Inserisci cognome ed eta
	
	2) Stampa
	
	3) Chiamata visita - Stampare nome paziente da visita
					   - Shift Array
	4) Salvataggio su file degli array
	
	5) Ripristino: f_paz -> Trasferimento dati da f_paz sugli Array
*/

using namespace std;
string cog[100];
int eta[100], i = 0;


void prenotazione();
void stampa();
void chvisita();

int main(){
	bool falso = 0;
	int op; 
	
	while(falso == 0){
		cout << "\n1) Prenotazione visita; 2) Stampa; 3) Chiamata visita; 4) Salva file su array; 5) Ripristino dei dati iniziali;\n";
		cin >> op;
		switch (op){
			case 1:
				prenotazione();
				break;
				
			case 2:
				cout << "\nStampa dei pazienti...\n";
				stampa();
				break;
			case 3:
				chvisita();
				break;
			case 4:
				break;
			
		}
	}
	
	
	return 0;
}

void prenotazione(){
	cout << "\nInserisci cognome ed eta' del paziente: ";
	cin >> cog[i] >> eta[i];
	i++;
}

void stampa(){
	for(int j = 0; j < i; j++){
		cout << cog[j] << " " << eta[j] << endl;
	}
}

void chvisita(){
	cout << "\nIl paziente " << cog[0] << " e' atteso in sala\n";
	for(int j = 0; j < i; j++){
		cog [j] = cog [j + 1];
		eta [j] = eta [j + 1];
		i--;
	}
}


