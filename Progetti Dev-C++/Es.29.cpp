//Powered by Valentin Ichim
#include <iostream>
#include <string.h>
using namespace std;
/*
Fare un programma che stampi le iniziali del nome e del cognome di tutti gli studenti
che abbiano la media dei voti compresa tra 7 e 8. La mdeia sia calcolata su 10 materie
delle classi terze di un ITI. Gli studenti di ogni classe sono 10 e il numero di classi sia massimo 4. 
*/
int main(){
	int i=0,a=0,c,cl=0,al=0;
	string s,n,co;//Sezione,Nome,Cognome;
	float m;
	while( cl<4 ){
		cout<<"Inserisci la classe e la sezione: \n";
		cin>>c>>s;
		if( c==3 ){
			while( al<10 ){
				al++;
				a++;
				cout<<"Inserisci il nome e il cognome del "<<a<<" alunno\n";
				cin>>n>>co;
				cout<<"Insersici la media dei 10 voti del "<<a<<" alunno della classe "<<c<<s<<" :\n";
				cin>>m;
				bool cond1 = m < 7 || m > 8;
				if(!cond1){
					cout<<"Le iniziali del nome e del cognome del "<<a<<" alunno sono: "<<n[0]<<" e "<<co[0]<<".\n";
				}
				else{
					cout<<"\nLa stampa delle iniziali del nome e del cognome del "<<a<<" alunno non e' possible poiche' la media non e' compresa tra 7 e 8.\n";
				}
			}
			a=0;
			al=0;
		}
		else
			cout<<"\nLa stampa delle iniziali del nome e del cognome del "<<a++<<" alunno non e' possible poiche' esso non fa parte di un terzo.\n\n";
		cout<<"\nLa stampa e' stata effettuata.\n";
		return 0;
	}
}
		
