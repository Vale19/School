#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int a=0,c;
	string s,fs;//Sezione,Fine stampa;
	float m;
	cout<<"Inserisci la classe e la sezione\n";
	cin>>c>>s;
	while( a < 20){
		a++;
		cout<<"\nInsersici la media dei 12 voti del "<<a<<" alunno della classe\n";
		cin>>m;
		cout<<"La media del "<<a<<" alunno e': "<<m<<".\n\n";
		cout<<"Se vuoi finire la stampa delle medie degli alunni della classe "<<c<<s<<" digita ok\n";
		cin>>fs;
		bool cond1 = fs == "ok" || fs == "Ok" || fs == "OK" || fs == "oK";
		if(cond1){
			cout<<"\nLa stampa e' finita.\n\n";
			break;
		}
		cout<<"La stampa delle medie dei 20 alunni e' stata effettuata.\n";
	}
	return 0;
}
