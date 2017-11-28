//Powered by Valentin Ichim
#include <iostream>
#include <string.h>
using namespace std;
/*
Fare un programma in C++ che rappresenti la fotocopiatrice. Quindi stampi un numero 
di volte prescelto dall'utente un foglio alla pressione di un pulsante di start.
Si rappresenti la stampa di un foglio con la scritta a video del numero di pagina.
Stampare anche un messaggio di errore  in caso di fine fogli nel cassetto che 
inizialmente ne contiene 500.
*/
int main(){
	string a;//Tasto start
	int i,nv,nf = 500;//Contatore,Numero di stampe, Numero di fogli rimasti
	cout<<"Quante volte vuoi stampare il tuo foglio? \n";
	cin>>nv;
	cout<<"\nDesideri iniziare la stampa?(start/n)\n";
	cin>>a;
	i = 0;
	bool cond1 = a == "start" || a == "Start" || a == "START" || a == "si" || a == "Si" || a == "SI" || a == "sI";
	if(cond1){
		while(i < nv){
			nf--;
			if(nf < 0){
				cout<<"Ci scusiamo, ma non ci sono piu' fogli disponibili per la stampa\n";
			}
			else
				cout<<"Stampa del foglio numero: "<< i + 1 <<".\n";
				i++;
		}	
	}
	else
		cout<<"La stampa delle fotocopie e' stata annullata. \n";
	return 0;
}
