//Powered by Valentin Ichim
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	string c;
	char a;
	int i;
	float b,h,r,Area;
	cout<<"Vuoi calcolare l'area del rettangolo o del cerchio ? (r/c): ";
	cin>>a;
	if( a == 'r'){
		c= "rettangolo";
		cout<<"Inserisci la base e l'altezza del rettangolo (cm) \n";
		cin>>b>>h;
		Area=b*h/2;
	}
	else{
		c= "cerchio";
		cout<<"Inserisci il raggio del cerchio (cm) \n";
		cin>>r;
		Area=r*2*3,14;
	}
	for(i=0;i<7;i++){
		cout<<" \n "<<i+1<<" ) L'area del "<<c<<" e' di: "<<Area<<" cm. \n";
		return 0;
	}
}
