//Powered by Valentin Ichim
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int i=0,a=0,c;
	string s,fs;//Sezione,Fine stampa;
	float m;
	cout<<"Inserisci la classe e la sezione\n";
	cin>>c>>s;
	while( i==0 ){
		a++;
		cout<<"\nInsersici la media dei 12 voti del "<<a<<" alunno della classe "<<c<<s<<" :\n";
		cin>>m;
		bool cond1 = m < 6;
		if(!cond1){
			cout<<"La media del "<<a<<" alunno e': "<<m<<".\n\n";
			cout<<"Se vuoi finire la stampa delle medie degli alunni della classe "<<c<<s<<" digita ok, altrimenti la stampa continuera'.\n";
			cin>>fs;
			bool cond2 = fs == "ok" || fs == "Ok" || fs == "OK" || fs == "oK";
			if(cond2){
			cout<<"\nLa stampa e' finita.\n\n";
			i++;
			}
		}
		else{
			cout<<"\nLa stampa della media dei 12 voti del "<<a<<" alunno non e' possible poiche' essa e' insufficiente.\n\n";
			cout<<"Se vuoi finire la stampa delle medie degli alunni della classe "<<c<<s<<" digita ok, altrimenti la stampa continuera'.\n\n";
			cin>>fs;
			bool cond2 = fs == "ok" || fs == "Ok" || fs == "OK" || fs == "oK";
			if(cond2){
			cout<<"\nLa stampa e' finita.\n\n";
			i++;
			}
		}
	}
	cout<<"\nLa stampa delle medie e' stata effettuata.\n";
	return 0;
}
