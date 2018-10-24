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

struct stdente{
	string cognome;
	float eta;
	float voto;
};

stdente classe[40];
stdente test[40];

int main() {
	int i = 0;
	fstream f1;
	f1.open("C:\\Users\\N10_4A\\Desktop\\Dati.txt", ios::in);
	f1 >> classe[i].cognome >> classe[i].eta >> classe[i].voto;
	
	while (!f1.eof()){
		i++;
		f1 >> classe[i].cognome >> classe[i].eta >> classe[i].voto;
	}
	
	for(int j = 0; j < i; j++){
		if (classe[j].voto > 7)
			cout << classe[j].cognome << classe[j].eta << classe[j].voto; 
	}
	
}
