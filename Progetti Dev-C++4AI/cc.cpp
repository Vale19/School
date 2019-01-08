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
				saldo -=a;
				cout << "il saldo attuale e' i euro "<< saldo << endl;
			} else {
				cout << "non e' possibile effettuare il prelievo di una cifra\n";
			}
		}
		
		void versamento (float a) {
			saldo += a;
			cout << "il saldo attuale di euro e' " << saldo;
		}
		
		void stampa
		(){
			cout<<"numero conto"<<nc<<endl;
			cout<<"correntista"<<correntista<<endl;
			cout<<"saldo"<<saldo<<endl;
			cout<<"citta"<<citta<<endl;
			cout<<"indirizzo"<<indirizzo<<endl;
		}
		
		void crea()
		{
			cout<<"inserisci numero conto"<<endl;
			cin>>nc;
			cout <<"inserisci il cognome del correntista "<<endl;
			cin>>correntista; 
		}
		
		void cambioresidenza(){
			cout<<"inserisci la citta"<<endl;
			cin>>citta;
			cout<<"inserisci l'indirizzo"<<endl;
			cin>>indirizzo;
		}
};

int main(){
	int scelta;
	float a;
	CC conto (0);
	conto.crea();
		do
		{
			cout<<"1.prelievo\n";
			cout<<"2.versamento\n";
			cout<<"3.stampa dati del conto\n";
			cout<<"4.Cambia residenza\n\n";
			cout<<"0.esci\n";
			cout<<"fai una scelta\n";
			cin >> scelta;
			switch (scelta){
				case 1:
					cout<<"inserire la cifra da prelevare";
					cin>>a;
					conto.prelievo(a);
					break;
				case 2:
					cout<<"inserire la cifra da versare";
					cin>>a;
					conto.versamento(a);
					break;
					
				case 3:
					conto.stampa();
					break;
				case 4:
					conto.cambioresidenza();
					break;	
			}
			
		}
		while (scelta!=0);
		return(0);
}
