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
			cout << "Inserire la tempeeratura minima del giorno " << ng << endl;
			cin >> tmin;
			cout << "Inserire la temperatura massima del giorno"
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
	
	int i, sc;
	giorno dic[NG];
}
