#include <iostream>
#include <string>
using namespace std;
/*
	Caricare tabella con record. Dato un numero intero da input (num)
	inserire i cognomi aventi ETA > num in un array
*/
void riempimento();
void stampa();
int etamin,
struct persone{
	string cognome;
	int eta;
};
persone tabella[30];
int num = 0;
int main(){
	cout << "Inserisci il nunero di cognomi che desideri inserire: \n";
	cin >> num;
	riempimento();
	stampa();
}
void riempimento(){
	cout << "Ora inserisci i cognomi con le relative eta': \n";
	for(int i = 0; i < num; i++){
		cin >> i >> ") "tabella[i].cognome >> tabella[i].eta;
	}
}
void stampa(){
	cout << "Qual e' l'eta' minima? ";
	cin >> etamin;
	cout << "Stampa dei cognomi che hanno eta' superiore rispetto a quella minima richiesta"
	for(int i = 0; i < num; i++)
		if(tabella[i].cognome)
		
}
