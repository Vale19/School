#include <iostream>
using namespace std;

int main(){
	char a;
	float b;//Base quadrato o rettangolo
	float h;//Altezza quadrato o rettangolo
	float sa;//Somma delle aree
	int n;//Numero delle figure geometriche
	cout<<"Se desidera stampare la somma felle aree di due o piu' quadrati identici inserisca q, altrimenti per la somma delle aree di rettangoli identici inserisca r. \n\n";
	cin>>a;
	if(a=='q'){
		cout<<"Inserisca il numero di quadrati che vuole sommare: \n";
		cin>>n;
		cout<<"Quali sono le basi e le altezze dei quadrati ?\n";
		cin>>b>>h;
		sa=(b*h)*n;
		cout<<"La somma delle aree dei "<<n<<" quadrati e': "<<sa<<".\n";
	}
	else if(a=='r'){
		cout<<"Inserisca il numero di rettangoli che vuole sommare: \n";
		cin>>n;
		cout<<"Quali sono le basi e le altezze dei rettangoli ?\n";
		cin>>b>>h;
		sa=(b*h)*n;
		cout<<"La somma delle aree dei "<<n<<" rettangoli e': "<<sa<<".\n";
	}
	else{
		cout<<"I numeri negativi ed i caratteri non sono ammessi.\n\n";
	}
	return 0;
}
