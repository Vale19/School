//Powered by Valentin Ichim
//Librerie
#include <iostream>
using namespace std;

int main(){
	int i;
	float area1;// Area del primo rettangolo che l'utente deve inserire
	float area2;// Area del secondo rettangolo che l'utente deve inserire
	float somma;// Somma delle aree dei due rettangoli
	float sdimezz;// Somma dimezzata
	cout<<"\n Stampare per 9 volte la somma delle aree di due rettangoli, i cui dati sono forniti dall'utente, solo se tale somma vale almeno 10, in caso contrario stampare il prodotto dimezzato di tali prodotti \n\n";
	cout<<"\n Inserisci l'area del primo rettangolo e quella del secondo: \n";
	cin>>area1>>area2;
	somma = area1 + area2 ;
	sdimezz = somma / 2;
	if (somma >= 10){
		for (i=0;i<9;i++){
			cout<<"La somma delle aree dei due rettangoli e': "<<somma<<". \n";
	    }
    }
    else{
	    cout<<"La somma dimezzata risulta essere: "<<sdimezz<<". \n";
	}
     return 0;
}
