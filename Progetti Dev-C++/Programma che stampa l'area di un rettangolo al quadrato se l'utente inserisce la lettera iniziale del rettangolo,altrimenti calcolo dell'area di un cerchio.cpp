#include <iostream>
using namespace std;
char a;
float area1,area2,base,alt,r,raggio;
int main(){
	cout<<"\n Programma che stampa l'area di un rettangolo al quadrato se l'utente inserisce la lettera iniziale del rettangolo,altrimenti calcolo dell'area di un cerchio \n\n";
	cout<<"Se vuoi calcolare l'area al quadrato del rettangolo digita r. (r) \n";
	cin>> a;
	if( a == 'r'){
	    cout<<"\n Inserisci la base e l'altezza del rettangolo \n";
	    cin>>base>>alt;
	    area1 = (base*alt)*(base*alt);
	    cout<<"L'area del rettangolo e': "<<area1<<" cm \n";
	}
	else{
	     cout<<"\n Inserisci il raggio del cerchio \n";
		 cin>>raggio;
	     area2 = (3,14*raggio*2)/2;
	     cout<<"L'area del cerchio e': "<<area2<<" cm \n";
	}
	return 0;
	}
