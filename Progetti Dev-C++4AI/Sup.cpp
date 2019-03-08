#include <iostream>
#include <string>

using namespace std;

class Supermercato{
	private:
		string nome;
		int rep;
		string nom_rep[10];
		float inc[10];
		float rendita;
		
	public:
		
		void inserisci(){
			cout << "\nInserisci il nome del supermercato: \n";
			cin >> nome;
			cout << "\nInserisci il numero di reparti: \n";
			cin >> rep;
			for(int i = 0; i < rep; i++){
				cout << "\nInserisci il nome del " << i + 1 << " reparto:";
				cin >> nom_rep[i];
				cout << "\nInserisci il suo incasso: ";
				cin >> inc[i];
			}
		}
		
		void stampa(){
			cout << "Nome supermercato: " << nome;
			cout << "Numero reparti: " << rep;
			cout << "Stampa nomi reparti \n\n";
			for(int i = 0; i < rep; i++)
				cout << "Nome reparto " << i + 1 << nom_rep[i];
			cout << "Stampa degli incassi \n\n";
			for(int i = 0; i < rep; i++)
				cout << "Stampa del " << i + 1 << " incasso" << nom_rep[i];
		}
};

int main(){
	Supermercato lista[100];
	int n;
	cout << "Inserisci numero supermercati \n";
	cin >> n;
	for(int i = 0; i < n; i++){
		lista[i].inserisci();
	}
	cout << "Stampa dei dati \n\n";
	for (int i = 0; i < n; i++)
		lista[i].stampa();
}
