#include <iostream>
#include <string>

using namespace std;

class CC

{
	string correntista;
	string nc;
	float saldo;
	private:
		string citta, indirizzo;
	public:
		CC (float a)
		{
			saldo = a;
		}
		
		void prelievo (float a) {
			if (saldo > a) {
				saldo -= a;
				cout << "Il saldo attuale e' di euro "<< saldo << endl;
			} else {
				cout << "Non e' possibile effettuare il prelievo di una cifra\n";
			}
		}
		
		void versamento (float a) {
			saldo += a;
			cout << "Il saldo attuale e' di euro " << saldo << endl;
		}
		
		void stampa
		(){
			cout << "Numero conto " << nc << endl;
			cout << "Correntista " << correntista << endl;
			cout << "Saldo " << saldo <<endl;
			cout << "Citta" << citta << endl;
			cout << "Indirizzo " << indirizzo << endl;
		}
		
		void crea()
		{
			cout << "Inserisci numero conto " << endl;
			cin >> nc;
			cout << "Inserisci il cognome del correntista " << endl;
			cin>>correntista; 
		}
		
		void cambioresidenza(){
			cout << "Inserisci la citta " << endl;
			cin >> citta;
			cout << "Inserisci l'indirizzo " << endl;
			cin >> indirizzo;
		}
};

int main(){
	int scelta;
	float a;
	CC conto (0);
	conto.crea();
		do
		{
			cout << "1.prelievo\n";
			cout << "2.versamento\n";
			cout << "3.stampa dati del conto\n";
			cout << "4.Cambia residenza\n";
			cout << "0.esci\n";
			cout << "fai una scelta\n";
			cin >> scelta;
			switch (scelta){
				case 1:
					cout << "Inserire la cifra da prelevare ";
					cin >> a;
					conto.prelievo(a);
					break;
				case 2:
					cout << "Inserire la cifra da versare ";
					cin >> a;
					conto.versamento(a);
					break;
					
				case 3:
					conto.stampa();
					break;
				case 4:
					conto.cambioresidenza();
					break;
				case 0:
					scelta = 0;
					break;
			}
			
		}
		while (scelta!=0);
		//return(0);
}
