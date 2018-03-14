//Powered by Valentin Ichim
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;
int main(){
	//Dichiarazione Variabili
	float array[10];
	//Inizio Ciclo generazione Numeri Casuali
	for (int i = 0; i < 10; i++){
		array[i] = (float)rand() / RAND_MAX;
		array[i] += rand() % 9 + 2;
		//Condizione
		if (array[i] >= 2.45 && array[i] <= 9.05){
			cout << array[i] << " | Radice Quadrata:" << sqrt(array[i]) << endl << endl;
		} else 
			//Decremento
			i--;
	}
	return 0;
}
