//Powered by Valentin Ichim
//Librerie
/*
	Fare un programma che acquisisca i dati di un file di testo (Cognome, Età, Voto). Successivamente inserire in un array
	tutti i voti maggiori di 7.  
*/
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void riempimento(); //Prototipazione della procedura riempimento

//Inizializzazione Record
struct votistud{
	string cognome;
	float eta;
	float voto;
};
votistud classe[40];
string cognome1;
int i = 0;
float vmax[40]; //Voto maggiore di 7
fstream f1;

int main(){
	riempimento();
	return 0;
}


void riempimento(){
	f1.open("C:\\Users\\Valentin\\Desktop\\Progetti Dev-C++4AI\\Dati.txt", ios :: in);//Collega il nome logico del programma con il nome del file in memoria di massa
	f1 >> classe[i].cognome >> classe[i].eta >> classe[i].voto;//lettura del primo record del file,detta lettura fuori ciclo
	
	while(!f1.eof()){
		if(classe[i].voto > 7){
			vmax[i] = classe[i].voto;
		}
	i++;
	f1 >> classe[i].cognome >> classe[i].eta >> classe[i].voto;
	}
	cout << endl;
	for(int cont; cont > i; cont++)
		cout << vmax[cont] << endl;
}
