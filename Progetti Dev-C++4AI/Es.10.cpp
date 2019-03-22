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
				cout << "La vettura assegnata ha targa " << p -> targa << " e cilindrata " << p -> cil;
				delete p;
			}
			
		}
};
