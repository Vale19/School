//Powered by Valentin Ichim
#include <iostream>
#include <string.h>
using namespace std;
/*
	Fare un programma in C++ che stampi il proprio nome e cognome se la media dei propri voti scolastici
	( da inserire in un array ) é compresa tra 7 e 8, altrimenti stampi un messaggio di ERRORE. Fare una
	procedura che riempia una matrice (3x3) e una funzione che restituisca il valore massimo della matrice.
	Quindi realizzare una funzione che restituisca TRUE se il valore massimo é superiore a 10. 
	Fare uso di procedure e funzioni.
*/
const int n = 10;
float media(float somma, float voti[n]);//Prototipazione della funzione media
int main(){
	float voti[n];
	string nome, cognome;
	//int n;//Numero di voti
	cout<<"Inserisci il tuo nome e cognome: ";
	cin>>nome>>cognome;
	//cout<<"\nQuanti sono i voti della tua pagella? ";
	//cin>>n;
	float Somma = 0;//Array dei voti, Somma
	cout<<"\nInserisci i voti della tua pagella qui di seguito...\n";
	for(int i = 0; i < n; i++){
		cin>>voti[i];
	}
	cout<<"\nLa media dei tuoi voti e': "<<media( Somma, voti)<<endl<<endl;
	if(media(Somma, voti) >= 7 && media(Somma, voti) <= 8){
		cout<<"\nIl tuo nome e': "<<nome<<" "<<cognome;
	}	
	return 0;
}
float media(float somma, float voti[n]){
	for(int i = 0; i < n; i++){
		somma += voti[i];
	}
	return somma / n;
}
