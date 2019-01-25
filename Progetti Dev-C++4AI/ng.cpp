#include <iostream>
#include <string>
using namespace std;

class giorno{
	int ng;
	int tmin;
	int tmax;
	
	public:
		void inserisci(int dt){
			ng = dt;
			cout << "Inserire la temperatura minima del giorno " << ng << endl;
			cin >> tmin;
			cout << "Inserire la temperatura massima del giorno " << ng << endl;
			cin >> tmax;
		}	
		
		int differenza(){
			return (tmax - tmin);
		}
		
		void stampa(int dt){
			if(tmin > dt)
					cout << ng << endl;
		}
		
		float mediag(){
			return ((tmax - tmin) / 2);
		}
		
		int gettmin(){
			return (tmin);
		}
		
		int getng(){
			return (ng);
		}
};

const int NG = 31;
int main(){
	
	int i, sc, numg;
	giorno dic[NG]; //Vettore che contiene 31 istanze della classe Giorno.
	int min, p, m;
	for(int i = 0; i < NG; i++)
		dic[i].inserisci(i+1);
	do{
		cout << "\n\n\n1.stampa dell'escursione termica giornaliera\n";
		cout << "\n\n\n2.stampa del giorno piu' freddo\n";
		cout << "\n\n\n3.stampa dei giorni in cui la temperatura e' rimasta sopra lo zero\n";
		cout << "\n\n\n4.stampa della media delle temperature medie giornaliere\n";
		cout << "\n\n\n0.esci\n";
		cout << "\n\nFai una scelta\n";
		cin >> sc;
		cout << endl;
		switch (sc){
			case 1:
				cout << "Quale e' il giorno che ti interessa? " << endl;
				cin >> numg;
				//for(int i = 0; i < NG; i++){
					//cout << "L'escursione termica del giorno " << dic[i].getng() << " e': " << dic[i].differenza() << endl;
				cout << "L'escursione termica del giorno" << numg << dic[i].getng() << " e': " << dic[numg].differenza() << endl;
				//}
				break;
				
			case 2:
				min = dic[0].getng();
				p = 0;
				for(int i = 1; i < NG; i++)
					if(dic[i].gettmin() < min){
						min = dic[i].gettmin();
						p = 1;
					}
				cout << "Il giorno piu' freddo e' stato il " << dic[p].getng() << " con gradi: " << min << endl;
				break;
				
			case 3:
				cout << "Giorni in cui la temperatura e' rimasta sopra lo zero:\n\n";
				for(int i = 0; i < NG; i++)
					dic[i].stampa(0);//Passa temperatura 0 al metodo
				break;
				
			case 4:
				m = 0;
				for(int i = 0; i < NG; i++)
					m = m + dic[i].mediag();
				m = m / NG;
				cout << "La temperatura media del mese e': " << m << endl;
				break;
				
		}
	}
	while (sc != 0);
	return(0);
}
