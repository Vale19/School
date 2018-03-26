//Powered by Valentin Ichim
#include <iostream>
#include <string.h>
/*
	Fare un algoritmo che riempie una matrice (2x2) con nomi di persone. Quindi se il proprio nome
	é presente, stampare la posizione in cui si trova. Realizzare un algoritmo più ottimizzato possibile.
*/
const int riga = 2, colonna = 2;
using namespace std;
int main(){
	string matrice[riga][colonna], nu;//Matrice dei Nomi, Nome dell'Utente
	cout<<"\nInserisci il tuo nome per proseguire...\n";
	cin>>nu;
	cout<<"\nOra inserisci quattro nomi: \n";
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++)
			cin>>matrice[i][j];
	}
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			if(matrice[i][j] == nu)
				cout<<"\nLa posizione del tuo nome e': \n"<<i++<<" | "<<j++;
			else if(matrice[i][j] != nu && i == 1 && j == 1)
				cout<<"\nNon e' stato possibile risalire alla posizione del tuo nome poiche' non e' stato inserito una seconda volta.\n\n";
		}	
	}
	return 0;
}
