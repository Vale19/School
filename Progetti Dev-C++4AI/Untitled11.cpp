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
int eta[100], j = 0;


void prenotazione();
void stampa();
void chvisita();

int main(){
	bool falso = 0;
	int op; 
	
	while(falso == 0){
		cout << "\n1) Prenotazione visita; 2) Stampa; 3) Precedenza; 4) Chiamata visita; 5) Salva file su array; 6) Ripristino dei dati iniziali;\n";
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
	string pr;
	cout << "Il paziente avra' maggiore priorita' degli altri? (si)";
	cin >> pr;
	if (pr == "si" || pr == "Si" || pr == "SI" || pr == "sI"){
		for (int i = np; i > 0; i--)
			cog[j] = cog[j-1];
		cout << "Inserisci il cognome e l'eta' del paziente prioritario da aggiungere alla lista: ";
		cin >> cog[j] >> eta[j];
		i++;
	}
	else{
		cout << "Inserisci il cognome del paziente da aggiungere alla lista: ";
		cin >> cog[i] >> eta[i];
		i++;
	}
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
void salvataggio ()
{
	fstream f1;
	f1.open("D:\\C++\\C++ 4\\File\\Gestione_paz.txt",ios::out);
	for(int i = 0; i < np; i++)
		f1 << array[i] << endl;
	f1.close();	
}


