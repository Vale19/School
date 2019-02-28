#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
int cont = 0;

class fattura{
	private:
		int nfattura;
		float importo;
		string dataem;
	public:
		void inserisci(int nfattura2, float importo2, string dataem2){
			nfattura = nfattura2;
			importo = importo2;
			dataem = dataem2;
		}
		string getdataem(){
			return dataem;
		}
		int getfattura(){
			return nfattura;
		}
		float getimporto(){
			return importo;
		}
		/*void stampa(){
			cout << "Numero fattura " << nf2;
			cout << "Importo fattura " << importo2;
		}*/
		float ammontare(string data){
			if(data == dataem)
				return importo;
			else
				return 0;
		}
};

int main(){
	fattura lista[1000];
	int scelta, NF;
	float imp;
	string dataemissione;
	do{
		cout << "\n1- Inserimento\n";
		cout << "2- Stampa\n";
		cout << "3- Totale delle fatture in una determinata data\n";
		cout << "0- Esci\n";
		cin >> scelta;
		system ("CLS");
		switch(scelta){
			case 1:
				cout << "Inserisci i dati relativi alla fattura: \n";
				cout << "Numero fattura: ";
				cin >> NF;
				cout << "Importo: ";
				cin >> imp;
				cout << "Data emissione: ";
				cin >> dataemissione;
				lista[cont].inserisci(NF, imp, dataemissione);
				cont++;
			break;
			case 2:
				cout << "Stampa dei dati ordinati secondo il loro numero...\n";
				cout << "\nDate Emissioni: \n";
				for(int i = 0; i < cont; i++){
					cout << i + 1 << ". " << lista[i].getdataem() << endl;
				}
				cout << "\nNumeri fatture: \n";
				for(int i = 0; i < cont; i++){
					cout << i + 1 << ". " << lista[i].getfattura() << endl;
				}
				cout << "\nImporti: \n";
				for(int i = 0; i < cont; i++){
					cout << i + 1 << ". " << lista[i].getimporto() << endl;
				}
			break;
			case 3:
				float tot = 0;
				string datain;
				cout << "Dammi la data di cui ti interessa sapere la somma degli importi " << endl;
				cin >> datain;
				for(int i = 0; i < cont; i++){
					if(datain == lista[i].getdataem())
						tot += lista[i].getimporto();
				}
				cout << "Il totale e' " << tot <<endl;
			break;
		}
	}
	while(scelta != 0);
	return 0;
}
