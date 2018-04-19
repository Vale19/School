//Powered by Valentin Ichim
#include <iostream>
/*
	Fare una funzione in C++ che completi l'esercizio iniziato in classe il 18 Aprile
	ossia la maggiore fra 3 aree. Quindi fare una funzione che restituisca il maggiore tra N
	numeri essendo il valore N fornito in input dall'utente (quindi nel main...)
*/
using namespace std;

float areaq (float lato);//Prototipazione dell'area del quadrato
float areat (float base, float altezza);//Prototipazione dell'area del triangolo
float arear (float base, float altezza);//Prototipazione dell'area del rettangolo
int main(){
	float l,b,a,ba,al;
	cout<<"\nInserisci il lato del quadrato: ";
	cin>>l;
	cout<<"\nInserisci la base e l'altezza del triangolo: ";
	cin>>b>>a;
	cout<<"\nInserisci la base e l'altezza del rettangolo: ";
	cin>>ba>>al;
	if(areaq(l) > areat(b, a)){
		if(areaq(l) > arear(ba, al))
			cout<<"\nL'area del quadrato e' la maggiore: "<<areaq(l);
		else
			cout<<"\nL'area del rettangolo e' la maggiore: "<<arear(ba, al);
	}
	else
		cout<<"\nL'area del triangolo e' la maggiore: "<<areat(b, a);
	return 0;
}
float areaq (float lato){
	return (lato * lato);
}
float areat (float base, float altezza){
	return (base * altezza / 2);
}
float arear (float base, float altezza){
	return (base * altezza);
}
