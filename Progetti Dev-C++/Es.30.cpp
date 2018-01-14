//Powered by Valentin Ichim
#include <iostream>
#include <string.h>
using namespace std;
/*
	Fare un programma in C++ che stampi la media di uno studente solo 
	se abbia un'eta' compresa tra 15 e 17 anni.
*/
int main(){
	int e;//Età
	float m;//Media
	string n,c;//Nome, Cognome
	cout<<"Inserisci il tuo nome nome, cognome, e la tua eta': \n\n";
	cin>>n>>c>>e;
	if( e >= 15 && e <= 17){
		cout<<"\n\nInserisci la tua media: \n\n";
		cin>>m;
		cout<<"\nLa media dell'alunno "<<n<<" "<<c<<" e': "<<m<<"\n\n";
	}
	else{
		cout<<"\n\nInserisci la tua media: \n\n";
		cin>>m;
		cout<<"\nLa media dell'alunno "<<n<<" "<<c<<" non puo' essere stampata poiche' l'eta' non e' compresa tra 15 e 17 anni. \n";
	}
	return 0;
}
