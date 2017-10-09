//Powered by Valentin Ichim
#include <iostream>
using namespace std;
int a,b,c;

int main(){
	cout<<"\n Programma per il calcolo della differenza di due numeri \n";
	cout<<"\n Inserisci il primo numero \n";
	cin>> a;
	cout<<"\n Inseerisci il secondo numero \n";
	cin>> b;
	if(a >= b){
		c = a - b;
		cout<<"\n La differenza dei due numeri e' "<< c;
	}
	else {
		while (a < b){
			cout<<"\n Errore \n";
		}
	}
	return 0;
}
