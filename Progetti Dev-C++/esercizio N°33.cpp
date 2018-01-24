//Powered by Valentin Ichim
#include <iostream>
/*
	Fare un programma in C++ che stampi la media voti di tre studenti e inserirle in un array, quindi stampare solo quelle superiori a 7,5.
*/
using namespace std;
int main(){
	int nm1,nm2,nm3,voti[dim],i;;//Numero Medie,Media totale
	float mt[3]{},somma1=0,somma2=0,somma3=0;
	const string parola1="\n\n";string parola2="Dammi il prossimo voto: ";
	cout<<"Quante sono le medie dei tre studenti? Inserisci di seguito i tre valori: \n\n";
	cin>>nm1>>nm2>>nm3;
	for(i=0;i<nm1;i++){
		cout<<parola2<<endl;
		cin>>voti[i]>>parola1;
		somma1 = somma1 + voti[i];
	}
	mt[0] = somma1 / nm1;
	if(mt[0] >= 7.5){
		if(mt[0] < 6){
		cout<<"\n\nSei un asino\n\n";
		}
		else cout<<endl<<mt[0];
	}
	for(i=0;i<nm2;i++){
		cout<<parola2<<endl;
		cin>>voti[i]>>parola1;
		somma2 = somma2 + voti[i];
	}
	mt[1] = somma2 / nm1;
	if(mt[0] >= 7.5){
		if(mt[1] < 6){
		cout<<"\n\nSei un asino\n\n";
		}
		else cout<<endl<<mt[1];
	}
	for(i=0;i<nm3;i++){
		cout<<parola2<<endl;
		cin>>voti[i]>>parola1;
		somma3 = somma3 + voti[i];
	}
	mt[2] = somma3 / nm1;
	if(mt[0] >= 7.5){
		if(mt[2] < 6){
		cout<<"\n\nSei un asino\n\n";
		}
		else cout<<endl<<mt[2];
	}
	return 0;
}
