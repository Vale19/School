#include <iostream>
#include <string>

using namespace std;

class CC{
	string correntista;
	string nc;
	float saldo;
	
	public: //Il costruttore inizializza il saldo alla quantita' minima necessaria per poter aprire un conto
		CC(float a){
			saldo = a;
		}
		
};
