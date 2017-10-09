#include <iostream>
using namespace std;

int main(){
	float a1,b1,a2,b2,area1,area2;
	cout<<"Programma per il calcolo dell'area di un rettangolo e di un triangolo \n";
	cout<<"Inserisci la base del rettangolo \n";
	cin>> a1;
	cout<<"Inserisci l'altezza del rettangolo \n";
	cin>> b1;
	area1 = a1 * b1;
	for (int cont=1; cont<5; cont++) {
    cout<< cont <<endl;
	}
	cout<<"Inserisci la base del triangolo \n";
	cin>> a2;
	cout<<"Inserisci l'altezza \n";
	cin>> b2;
	area2 = a2 * b2 / 2;
	for (int cont=0; cont<10; cont++) {
        cout<< cont <<endl;
    }

}
