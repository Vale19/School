//Powered by Valentin Ichim
#include <iostream>
using namespace std;
/*
    Fare un programma in C++ che resituisca la somma di due array di 10 numeri con la virgola ovvero
    che sommi le componenti con lo stesso indice in un nuovo array. Quindi calcolare la media dei numeri di questo array
    risultante e stampi il totale degli eventuali numeri negativi presenti nell'array.
*/
int main(){
    //Dichiarazione Variabili
    double array1[10],array2[10],numneg = 0,som = 0, media = 0;
    float somma[10];
    int i, nn = 0;
    cout<<"Inserisci i 10 valori del primo array: \n";
    //Inizio Primo Ciclo
    for(int i = 0; i < 10; i++){
		cin>>array1[i];
        //Prima Condizione
        if(array1[i] < 0)
        	nn++;
	}
	cout<<"Inserisci i 10 valori del secondo array: \n";
	//Inizio Secondo Ciclo
	for(int i = 0; i < 10; i++){
        cin>>array2[i];
        //Seconda condizione
        if(array2[i] < 0)
            nn++;
	}
    //Fine Secondo Ciclo
    //Inizio Terzo Ciclo
    for(i = 0; i < 10; i++){
        //Calcolo della somma
        somma[i] = array1[i] + array2[i];
        som += somma[i];
        //Terza condizione
        if(somma[i] < 0){
        //Somma Totale Numeri Negativi
            numneg = numneg + somma[i];
        }
    media = somma[i] / 10;
    }
    //Fine Terzo Ciclo
    //Stampa Media Totale, Numeri Negativi, Somma Totale Num Neg, Somma Array Con Lo Stesso Indice
    cout<<"La media totale e': "<<media<<".\n\n";
    cout<<"I numeri negativi  in totale sono: "<<nn<<"\n\n";
    cout<<"La somma totale dei numeri negativi e' : "<<numneg<<".\n\n";
    cout<<"La somma dei due array con lo stesso indice e': \n";
    for(i = 0; i < 10; i++)
        cout<<i+1<<") "<<somma[i]<<"\n";
    
    return 0;
}
