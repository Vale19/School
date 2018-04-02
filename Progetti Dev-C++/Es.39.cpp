//Powered by Valentin Ichim
#include <iostream>
#include <cstdlib>
#include <ctime>
#include<string.h>
const int nomi = 7, riga = 3, colonna = 3;
const float som = 133.556;
/*
	Fare un programma in C++ che riempia un array con 7 nomi di persona se la somma degli elementi di una
	matrice (3x3) dà un numero superiore a 133,556. 
*/
using namespace std;
int main(){
	string ru, array1[nomi];//Risposta Utente, Array dei Nomi
	float matrice[riga][colonna],somma = 0;
	cout<<"Desideri inserire i numeri da sommare manualmente oppure vuoi che siano randomici? [m/r]\n\n";
	cin>>ru;
	if(ru == "m" || ru == "M"){
		cout<<"Quali sono i 9 numeri da sommare? Inseriscili qui di seguito: \n\n";
		for(int i = 0; i < riga; i++){
			for(int j = 0; j < colonna; j++){
				cin>>matrice[i][j];
				somma += matrice[i][j];
			}
		}
		if(somma > som){
			cout<<"La somma corrisponde a "<<somma<<" ed e' percio' possibile realizzare l'operazione successiva... \n\n";
			cout<<"Inserisci i nomi di 7 persone: \n\n";
			for(int i = 0; i < nomi; i++){
				cin>>array1[i];
			}
				
		}
		else
			cout<<"La somma, che corrisponde a "<<somma<<" non e' sufficiente per realizzare l'operazione successiva.\n";
	}
	else if(ru == "r" || ru == "R"){
		for(int i = 0; i < riga; i++){
			for(int j = 0; j < colonna; j++){
				matrice[i][j] = rand() % 100;
				somma += matrice[i][j];
			}
		}
		if(somma > som){
			cout<<"La somma corrisponde a "<<somma<<" ed e' percio' possibile realizzare l'operazione successiva... \n\n";
			cout<<"Inserisci i nomi di 7 persone: \n\n";
			for(int i = 0; i < nomi; i++){
				cin>>array1[i];
			}		
		}
		else
			cout<<"La somma, che corrisponde a "<<somma<<" non e' sufficiente per realizzare l'operazione successiva.\n";
	}
	return 0;
}

