//Powered by Valentin Ichim
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
/*
	Calcolare e stampare il pi� anziano di dieci studenti adolescenti (et� 14-18), le cui
	et� siano state inserite in un array apposito in modo randomico. Se il pi� anziano
	� maggiorenne allora stampare l'et� del pi� giovane, altrimenti l'et� media dei 10
	studenti.
*/
using namespace std;
void etaStudenti(int eta[10]);
void StampaEta(int eta[10]);
int massimoEta(int eta[]);
int Condizione(int eta[]);
int main(){
	int v[10];//v1[10];
	etaStudenti(v);
	StampaEta(v);
	cout<<"\nL'alunno piu' anziano ha "<<massimoEta(v)<<" anni.\n";
    cout<<Condizione(v);
	return 0;
}
void etaStudenti (int eta[10]){
	srand(time(NULL));//Creazione del seed della sequenza di numeri random
	for(int i = 0; i < 10; i++)
		eta[i] = rand() % (14 - 18 + 1) + 14;
}
void StampaEta(int eta[10]){
	cout<<"\nStampa delle eta' degli studenti: \n";
	for(int i = 0; i < 10; i++)
		cout<<eta[i]<<endl;
}
int massimoEta (int eta[]){
	int max = eta[0];
	for(int i = 0; i < 10; i++)
		if(eta[i] > max)
			max = eta[i];
	return max;
}
int Condizione(int eta[]){
	int min = eta[0],somma = 0,media = 0;
	if( massimoEta ( eta) >= 18){
		for(int i = 0; i < 10; i++)
			if(eta[i] < min)
				min = eta[i];
		media = somma / 10;
		cout<<"L' alunno piu' piccolo ha: "<<media<<" anni\n";
		//return min;
	}
	else{
		for(int i = 0; i < 10; i++)
			somma += eta[i];
		cout<<"La media delle eta' e': "<<somma /10;
		//return somma / 10;
	}
}

