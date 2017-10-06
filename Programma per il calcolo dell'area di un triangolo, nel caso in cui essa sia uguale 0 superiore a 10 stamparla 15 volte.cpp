//Powered by Valentin Ichim
#include <iostream>
using namespace std;
float a;
float b;
float c;

int main(){
	cout<<"Programma per il calcolo dell'area di un triangolo, nel caso in cui essa sia uguale o superiore a 10 stamparla 15 volte \n\n";
	cout<<"Inserisci la base del triangolo \n";
	cin>> a;
	cout<<"Inserisci l'altezza del triangolo \n";
	cin>> b;
	c = a * b / 2;
	if (c >= 10){
		for(int i = 0; i<15; i++){
			cout<<"L'area del triangolo e' "<<c<<" .\n\n";
		}
	}
	else{
		cout<<"L'area del triangolo e' "<<c<<" .\n\n";
	}
	return 0;
}

	
