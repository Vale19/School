#include <iostream>
#include <string>
using namespace std;

class vettore{
	int v[10];
	int n;
	public:
		void carica(int l, string s){
			n = l;
			for(int i = 0; i < n; i++){
				cout << "\n" << s << " " << i + 1 << "\t";
				cin >> v[i];
			}
		}
		
		void inserisci(int el, int pos){
			int i; 
			n++;
			for(int i = n-1; i > pos; i--)
				v[i] = v[i-1];
			v[pos] = el;
		}
		
		int max_pos(){
			int i, p = 0, max = v[0];
			for(i = 1; i < n; i++)
				if(v[i] > max){
					max = v[i];
					p = i;
				}
			return (p);
		}
		
		float media(){
			int i;
			float s = 0;
			
			for(i = 0; i < n; i++)
				s = s + v[i];
			s = s / n;
			return (s);
		}
		
		void stampa(){
			int i;
			for(i = 0; i < n; i++)
				cout << v[i] << endl;
		}
		
		void stampap(int p){
			cout << v[p] << endl;
		}
};
int main(){
	int scelta, cod, p, n;
	vettore codice, prezzo, ore;
	do{
		cout << "Inserire il numero di cellulari (max 10)\n";
		cin >> n;
	}
	while(n > 10);
	
	cout << "\nInserimento Codici:\n";
	codice.carica(n, "codice");
	cout << "\nInserimento Prezzi:\n";
	prezzo.carica(n, "prezzo");
	cout << "\nInserimento Ore di Autonomia:\n";
	ore.carica(n, "ore");
	
	do{
		cout << "\n\n1.Media dei prezzi\n";
		cout << "2.Media delle ore di autonomia\n";
		cout << "3.Cellulare con prezzo massimo\n";
		cout << "4.Inserimento nuovo dato\n";
		cout << "5.Stampa dati\n";
		cout << "0.Esci\n";
		cout << "Fai una scelta\n";
		cin >> scelta;
		
		switch (scelta){
			case 1:
				cout << "\nPrezzo medio: " << prezzo.media() << endl;
			break;
			
			case 2:
				cout << "\nMedia delle ore di autonomia: " << ore.media() << endl;
			break;
		
			case 3:
				p = prezzo.max_pos();
				cout << "\nIl cellulare di prezzo massimo ha codice: ";
				codice.stampap(p);
				cout << "\nOre di autonomia: ";
				ore.stampap(p);
				cout << "\nPrezzo: ";
				prezzo.stampap(p);
				cout << endl;
			break;
			
			case 4:
				cout << "Inserire la posizione del nuovo cellulare: \n";
				cin >> p;
				cout << "Codice: \n";
				cin >> cod;
				codice.inserisci(cod, p);
				cout << "Inserisci il prezzo: \n";
				cin >> cod;
				prezzo.inserisci(cod, p);
				cout << "Ore di autonomia:\n";
				cin >> cod;
				ore.inserisci(cod, p);
			break;
			
			case 5:
				cout << "\nCodici\n";
				codice.stampa();
				cout << "\nOre di autonomia\n";
				ore.stampa();
				cout << "\nPrezzi\n";
				prezzo.stampa();
			break;
		}								
	}
	while (scelta != 0);
	
	return (0);
}
