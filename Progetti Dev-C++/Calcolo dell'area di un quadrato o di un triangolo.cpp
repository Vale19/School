#include <iostream>
using namespace std;

int base,alt,area;
char a = 'Q';
char a = 'T';
int main(){
	cout<<"\n Programma per il calcolo dell'area di un quadrato o di un triangolo \n";
	cout<<"\n Inserisci q per l'area del quadrato oppure t per quella del triangolo \n";
	cin>> a;
	cout<<"\n Inserisci la base \n";
	cin>> base;
	cout<<"\n Inserisci l'altezza \n";
	cin>> alt;
	if (a == 'Q'){
	    area = base * alt;// Calcolo area quadrato
        cout<<"\n L'area del quadrato risulta essere di "<< area <<" metri \n";
	}
	else if (a == 'T'){
	    area = base * alt / 2;// Calcolo area triangolo
        cout<<"\n L'area del triangolo risulta essere di "<< area <<" metri \n";
    }
    else{
    	cout<<"\n La lettera inserita non da alcun risultato valido \n";
    }
    return 0;
}
