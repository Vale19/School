//Powered by Valentin Ichim
#include <iostream>
#include <string.h>
using namespace std;
/*
	Fare un programma in C++ che stampi la media voti di tre studenti e inserirle in un array, quindi stampare solo quelle superiori a 7,5.
*/
int main(){
	int v=0,i=0,s=0,nm1,nm2,nm3;//Contatore,  Numero medie
	float somma1=0,somma2=0,somma3=0,m,mt[3];//Somma, Media, Media Totale
	cout<<"Quante sono le medie dei tre studenti? Inserisci di seguito i tre valori: \n\n";
	cin>>nm1>>nm2>>nm3;
	while(v<nm1){
		v++;
		i++;
		s++;
		cout<<"\n\nInserisci la "<<i<<" media del primo studente:\n";
		cin>>m;
		somma1= somma1 + m;
	}
	v=0;
	i=0;
	s=0;
	while(v<nm2){
		v++;
		i++;
		s++;
		cout<<"\n\nInserisci la "<<i<<" media del secondo studente:\n";
		cin>>m;
		somma2= somma2 + m;
	}
	v=0;
	i=0;
	s=0;
	while(v<nm3){
		v++;
		i++;
		s++;
		cout<<"\n\nInserisci la "<<i<<" media del terzo studente:\n";
		cin>>m;
		somma3= somma3 + m;
	}
	mt[0]= somma1 / nm1;
	mt[1]= somma2 / nm2;
	mt[2]= somma3 / nm3;
	
	if(mt[0] > 7.5){
		cout<<mt[0]<<endl;
	}
	if(mt[1] > 7.5){
		cout<<mt[1]<<endl;
	}
	if(mt[2] > 7.5){
		cout<<mt[2]<<endl;
	}
	return 0;
}
