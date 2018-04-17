//Powered by Valentin Ichim
#include <iostream>
using namespace std;
/*
	Fare un programma in C++ che calcoli somma, sottrazione e prodotto
	di tre numeri con la virgola usando opportune funzioni o procedure.
*/
float somma(float n1, float n2, float n3);//Prototipazione della funzione Somma
float sottrazione(float n1, float n2, float n3);//Prototipazione della funzione Sottrazione
float prodotto(float n1, float n2, float n3);//Prototipazione della funzione Prodotto
int main(){
	float a,b,c;//Primo, Secondo, e Terzo Valore
	cout<<"\nInsersci i tre numeri con la virgola: \n";
	cin>>a>>b>>c;
	cout<<"La somma dei tre valori e': "<<somma(a, b, c);
	cout<<"\nLa sottrazione e': "<<sottrazione(a, b, c);
	cout<<"\nIl prodotto: "<<prodotto(a, b, c);
	return 0;
}
float somma(float n1, float n2, float n3){
	return (n1 + n2 + n3);
}
float sottrazione(float n1, float n2, float n3){
	return (n1 - n2 - n3);
}
float prodotto(float n1, float n2, float n3){
	return (n1 * n2 * n3);
}
