//Powered by Valentin Ichim
#include <iostream>
#include <cstdlib>
#include <ctime>
const int num = 5, n = 0, n1 = 100;
/*
	Fare un programma in C++ che stampi il MAX tra due array di cui uno riempito con numeri casuali tutti negativi.
*/
using namespace std;
int main(){
	srand(time(NULL));
	double array1[num], array2[num];
	int max = 0, max1 = 0;
	for(int i = 0; i < 5; i++){
		array1[i] = rand() - RAND_MAX;
		array2[i] = rand() % 100;
		if(array1[i] >= max)
			max = array1[i];
		else if(array1[i] < max)
			max = max;
		if(array1[i] >= max1)
			max1 = array2[i];
		else if(array2[i] < max1)
			max1 = max1;
	}
	cout<<"\nStampa dei numeri casuali negativi: \n\n";
	for(int i = 0; i < 5; i++){
		cout<<array1[i]<<" || "<<array2[i]<<endl;
	}
	cout<<"\n\nIl numero negativo maggiore che e' stato trovato nel primo array e': \n"<<max;
	cout<<"\nIl numero maggiore che e' stato trovato nel secondo array e': \n"<<max1;
	return 0;
}
