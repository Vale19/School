#include <iostream>
#include <string>

using namespace std;

int numfat = 0;
class fattura{
	private:
		int nf;
		float importo;
		string dataem;
	public:
		void inserisci(){
			cout << "Dammi numero fattura ";
			cin >> nf;
			cout << "Inserisci l'importo ";
			cin >> importo;
			cout << "Inserisci la data di emissione ";
			cin >> dataem;
		}
		void stampa(){
			cout << "Numero fattura " << nf;
			cout << "Importo fattura " << importo;
		}
		float ammontare(string data){
			if(data == dataem)
				return importo;
			else
				return 0;
		}
};

int main(){
	int scelta;
	fattura lista[1000];
	
	do{
		cout << "1.Inserimento dati fattura / 2.Stampa dati\n";
		cout << "Fai una scelta\n";
		cin >> scelta;
	
		switch (scelta){
			case 1:
				cout << "Inserisci dati della fattura: ";
				lista[numfat].inserisci();
				numfat++;
			break;
			case 2:
				float tot = 0;
				string datain;
				cout << "Inserisci la data che ti interessa \n";
				cin >> datain;
				for(int i = 0; i < numfat; i++){
					tot = tot + lista[i].ammontare(datain);
				}
			break;
		}
	}
}
