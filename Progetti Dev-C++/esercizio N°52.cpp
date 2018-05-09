//Powered by Valentin Ichim
#include <iostream>
/*
	Calcolare e stampare il più anziano di dieci studenti adolescenti (età 14-18), le cui
	età siano state inserite in un array apposito in modo randomico. Se il più anziano
	è maggiorenne allora stampare l'età del più giovane, altrimenti l'età media dei 10
	studenti.
*/
using namespace std;
const int righe = 2, colonne = 2;
int i, j;
float media, somma = 0;
void etaStudenti(float eta[righe][colonne]);
//void StampaEta(float eta[righe][colonne]);
int massimoEta(float eta[righe][colonne]);
float Condizione(float eta[righe][colonne]);
int main(){
	float v[righe][colonne];//v1[10];
	cout<<"Inserisci le eta' dei 4 studenti...\n";
	etaStudenti(v);
	//StampaEta(v);
	cout<<"\nL'alunno piu' anziano ha "<<massimoEta(v)<<" anni.\n";
    cout<<Condizione(v);
	return 0;
}
void etaStudenti (float eta[righe][colonne]){
	for(i = 0; i < righe; i++)
		for(j = 0; j < colonne; j++)
			cin>>eta[i][j];
}
int massimoEta (float eta[righe][colonne]){
	int max = eta[0][0];
	for(i = 0; i < 10; i++)
		for(j = 0; j < colonne; j++)
			if(eta[i][j] > max)
				max = eta[i][j];
	return max;
}
float Condizione(float eta[righe][colonne]){
	int min = eta[0][0];
	//float somma = 0,media;
	if( massimoEta (eta) >= 18 ){
		for(i = 0; i < righe; i++)
			for(j = 0; j < colonne; j++)
				if(eta[i][j] < min)
					min = eta[i][j];
		return min;
		//return min;
	}
	else{
		for(i = 0; i < righe; i++)
			for(j = 0; j < colonne; j++)
				somma += eta[i][j];
		media = somma / 4;
		return media;
		//return somma / 10;
	}
}

