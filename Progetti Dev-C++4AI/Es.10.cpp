#include <iostream>
#include <string>
using namespace std;

struct vettura{
	string targa;
	int cil;
	struct vettura*next;
};

class pila{
	 vettura*testa;
	 
	 public:
	 	pila(){ //costruttore
	 		testa = NULL; //Inizializzazione della pila a vuoto
	 	}
	 	void push(){ //Inserisce un elemento in testa alla lista
	 		vettura*p;
	 		p = new(vettura);
	 		cout << "Numero di targa\n";
	 		cin >> p -> targa;
	 		cout << "Cilindrata\n";
	 		cin >> p -> cil;
	 		p -> next = testa;
	 		testa = p;
		}
		
		void pop(){ //Estrae un elemento dalla testa della pila
			vettura*p;
			if(testa == NULL)
				cout << "Non ci sono autovetture disponibili, attendere...\n";
			else{
				p = testa;
				testa = p -> next;
				cout << "La vettura assegnata ha targa " << p -> targa << " e cilindrata " << p -> cil << endl;
				delete p;
			}
			
		}
		void stampa(){
			vettura*p;
			if(testa == NULL)
				cout << "Non ci sono autovetture disponibili\n";
			else{
				cout << "ELENCO AUTOVETTURE DISPONIBILI\n";
				for(p = testa; p != NULL; p = p -> next)
					cout << p -> targa << "\t\t" << p -> cil << endl;
			}
		}
		~ pila(){
			vettura*p;
			
			while(testa != NULL){
				p = testa;
				testa = testa -> next;
				delete (p);
			}
		}
};

int main(){
	int scelta;
	pila garage;
	
	do{
		cout << "1.Inserisci auto (push)\n";
		cout << "2.Elimina auto (pop)\n";
		cout << "3.Stampa elenco auto presenti nel garage\n";
		cout << "0.Esci\n";
		cout << "Fai una scelta\n";
		cin >> scelta;
		switch (scelta){
			case 1:
				garage.push();
			break;
			case 2:
				garage.pop();
			break;
			case 3:
				garage.stampa();
			break;
		}
	}
	while(scelta != 0);
}
