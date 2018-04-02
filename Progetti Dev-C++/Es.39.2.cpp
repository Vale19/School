//Powered by Valentin Ichim
#include <iostream>
#include <cstdlib>
#include <ctime>
#include<string.h>
#include <Windows.h>
const int nomi = 7, riga = 3, colonna = 3;
/*
	Fare un programma in C++ che riempia un array con 7 nomi di persona se la somma degli elementi di una
	matrice (3x3) dà un numero superiore a 133,556. Modificarlo considerando la somma degli elementi della prima riga
	e della prima colonna anziche' gli elementi di tutta la matrice. Se la somma degli elementi di riga supera quella di colonna
	riempire l'array e stampare i nomi al contrario. Infine se tra questi nomi e' presente il proprio stampare il valore boolean 'TRUE'.
*/
using namespace std;
int main(){
	string ru, nu, array1[nomi];//Risposta Utente, Nome Utente, Array dei Nomi
	float matrice[riga][colonna],sommar = 0, sommac = 0;//Somma Riga, Somma Colonna
	bool boolean = TRUE;//Variabile Booleana
	cout<<"Insersici qui sotto il tuo nome: \n";
	cin>>nu;
	cout<<"Desideri inserire i numeri da sommare manualmente oppure vuoi che siano randomici? [m/r]\n";
	cin>>ru;
	if(ru == "m" || ru == "M"){
		cout<<"Quali sono i 9 numeri? Inseriscili qui di seguito: \n\n";
		for(int i = 0; i < riga; i++){
			for(int j = 0; j < colonna; j++)
				cin>>matrice[i][j];
		}
		for(int i = 0; i < 1; i++){
			for(int j = 0; j < 3; j++)
				sommar += matrice[i][j];
		}
		for(int j = 0; j < 1; j++){
			for(int i = 0; i < 3; i++)
				sommac += matrice[i][j];
		}
		if(sommar > sommac){
			cout<<"La somma corrisponde a "<<sommar<<" ed e' percio' possibile realizzare l'operazione successiva poiche' la somma della colonna e' inferiore... \n\n";
			cout<<"Inserisci i nomi di 7 persone: \n\n";
			for(int i = 0; i < nomi; i++){
				cin>>array1[i];
			}
			cout<<"\nStampa al contrario dei seguenti nomi...\n\n";
			for(int i = 6; i > -1; i--){
				Sleep(1000);
				cout<<array1[i]<<endl;
			}
			for(int i = 0; i < nomi; i++){
				if(array1[i] == nu)
					cout<<"\nIl tuo nome e' presente all'interno di di questo array || "<<boolean;
			}
		}
		else
			cout<<"\nLa somma della prima riga, che corrisponde a "<<sommar<<" non e' sufficiente per realizzare l'operazione successiva.\n";
	}
	else if(ru == "r" || ru == "R"){
		for(int i = 0; i < riga; i++){
			for(int j = 0; j < colonna; j++){
				matrice[i][j] = rand() % 100;
			}
		}
		for(int i = 0; i < 1; i++){
			for(int j = 0; j < 3; j++)
				sommar += matrice[i][j];
		}
		for(int j = 0; j < 1; j++){
			for(int i = 0; i < 3; i++)
				sommac += matrice[i][j];
		}
		if(sommar > sommac){
			cout<<"La somma corrisponde a "<<sommar<<" ed e' percio' possibile realizzare l'operazione successiva poiche' la somma della colonna e' inferiore... \n\n";
			cout<<"Inserisci i nomi di 7 persone: \n\n";
			for(int i = 0; i < nomi; i++){
				cin>>array1[i];
			}
			cout<<"\nStampa al contrario dei seguenti nomi...\n\n";
			for(int i = 6; i > -1; i--){
				Sleep(1000);
				cout<<array1[i]<<endl;
			}
			for(int i = 0; i < nomi; i++){
				if(array1[i] == nu)
					cout<<"\nIl tuo nome e' presente all'interno di di questo array || "<<boolean;
			}
		}
		else
			cout<<"\nLa somma della prima riga, che corrisponde a "<<sommar<<" non e' sufficiente per realizzare l'operazione successiva.\n";
	}
	return 0;	
}
