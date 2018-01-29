//Powered by Valentin Ichim
#include <iostream>
using namespace std;
/*
	Fare un programma in C++ che dopo aver riempito un vettore costituito da aree 
	di rettangoli stampi l'area più grande e quella più piccola. 
	Successivamente modificare il programma stampando le aree con valore compreso tra 2.56 e 9.6 
*/
int main(){
	int i = 0;
	float area[i],n,massimo=0,minimo=100;//Area, Valore, Numero Aree, Numero Massimo, Numero Minimo
	
	
	cout<<"\nInsersici il numero delle aree che devi inserire: ";
	cin>>n;
	cout<<"\nInsersici i valori delle aree dei rettangoli: \n\n";
	
	for( i; i < n; i++){
		cin>>area[i];
		if(area[i] > massimo){
			massimo = area[i];
		}
		if(area[i] < minimo){
			minimo = area[i];
		}
		if(area[i] >= 2.55 && area[i] <= 9.7){
			cout<<"\nIl valore e' compreso tra 2.56 e 9.6: "<<area[i]<<endl;
		}
	}
	cout<<"\nIl valore massimo e': "<<massimo<<"\n";
	cout<<"\nIl valore minimo e': "<<minimo<<"\n";
	
	
	return 0;
}
