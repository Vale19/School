#include <iostream>
#include <string>
#include <fstream>

using namespace std;

fstream f1;
int i = 0;
class CC{
	string correntista;
	string nc;
	float saldo;
	
	struct op{
		string data;
		float importo;
	};
	op lista[1000];
	
	private:
		string citta, indirizzo;
		
	public:
		int nop;
		CC (float a)
		{
			saldo = a;
			nop = 0;
		}
		
		
		void prelievo (float a, string data) {
			if (saldo > a) {
				saldo -= a;
				cout << "Il saldo attuale e' di euro "<< saldo << endl;
				lista[nop].importo = -a;
				lista[nop].data = data;
				nop++;
			}
			else
				cout << "Non e' possibile effettuare il prelievo di questa cifra\n";
		}
		
		void versamento (float a , string data) {
			saldo += a;
			cout << "Il saldo attuale e' di euro " << saldo << endl;
			lista[nop].importo = a;
			lista[nop].data = data;
			nop++;
		}
		
		void stampa() {
			cout << "Numero conto " << nc << endl;
			cout << "Correntista " << correntista << endl;
			cout << "Saldo " << saldo <<endl;
			cout << "Citta" << citta << endl;
			cout << "Indirizzo " << indirizzo << endl;
		}
		
		void crea() {
			cout << "Inserisci numero conto " << endl;
			cin >> nc;
			cout << "Inserisci il cognome del correntista " << endl;
			cin>>correntista; 
		}
		
		void cambioresidenza() {
			cout << "Inserisci la citta " << endl;
			cin >> citta;
			cout << "Inserisci l'indirizzo " << endl;
			cin >> indirizzo;
		}
		void salvataggio() {
			f1.open("C:\\Users\\N10_4A\\Desktop\\Programmic++\\file.txt", ios :: out);
			for(i = 0; i < nop; i++)
				f1 << lista[i].importo << " " << lista[i].data << endl;
			f1.close();
		}
};

int main(){
	int scelta;
	string data;
	float a;
	CC conto (0);
	conto.crea();
		do
		{
			cout << "1.prelievo\n";
			cout << "2.versamento\n";
			cout << "3.stampa dati del conto\n";
			cout << "4.Cambia residenza\n";
			cout << "5.Salvataggio \n";
			cout << "0.esci\n";
			cout << "fai una scelta\n";
			cin >> scelta;
			switch (scelta){
				case 1:
					cout << "Inserire la data corrente " << endl;
					cin >> data;
					cout << "Inserire la cifra da prelevare ";
					cin >> a;
					conto.prelievo(a, data);
					break;
				case 2:
					cout << "Inserire la data corrente " << endl;
					cin >> data;
					cout << "Inserire la cifra da versare ";
					cin >> a;
					conto.versamento(a, data);
					break;
					
				case 3:
					conto.stampa();
					break;
				case 4:
					conto.cambioresidenza();
					break;
				case 5:
					conto.salvataggio();
					break;
				case 0:
					scelta = 0;
					break;
			}
			
		}
		while (scelta !=0 );
		//return(0);
}
