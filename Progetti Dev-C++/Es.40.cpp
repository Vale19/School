//Powered by Valentin Ichim
#include <iostream>
#include <Windows.h>
const int riga = 3, colonna = 3;
/*
	Fare un programma in C++ che stampi il numero più alto e quello più basso di una matrice (3x3)
	già riempita. Quindi stampare il maggiore elemento di una riga scelta dall'utente e il maggiore
	elemento di una colonna scelta dall'utente. Se il maggiore elemento di riga e' superiore al
	maggiore di quello della colonna stampare la somma degli elementi della diagonale principale della
	matrice (3x3). Infine provare a stampare una matrice (3x3) già riempita con numeri random usando il comando
	di tabulazione "\t".
*/
using namespace std;
int main(){
	float max = 0, min = 100, nmr, nmc,max1 = 0, min1 = 100, sommad = 0;//Numero Massimo, Numero Minimo, Numero Maggiore Riga, Numero Maggiore Colonna
	float matrice[riga][colonna];//Matrice (3x3)
	cout<<"\nInserisci i 9 numeri:\n\n";
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin>>matrice[i][j];
			if(matrice[i][j] > max)
				max = matrice[i][j];
			if(matrice[i][j] < min)
				min = matrice[i][j];
		}
	}
	cout<<"\n\nIl numero maggiore e': "<<max<<" mentre quello minore e': "<<min;
	Sleep(1000);
	cout<<"\nOra inserisci invece il numero della riga in cui vuoi verificare il numero maggiore e poi anche quello della colonna...\n";
	cin>>nmr>>nmc;
	max = 0;
	min = 100;
	for(int i = 0; i < nmr; i++){
			for(int j = 0; j < 3; j++){
				if(matrice[i][j] > max)
					max = matrice[i][j];
			}
	}
	for(int j = 0; j < nmc; j++){
			for(int i = 0; i < 3; i++){
				if(matrice[i][j] > max1)
					max1 = matrice[i][j];
			}		
	}
	sommad += matrice[0][0];
	sommad += matrice[1][1];
	sommad += matrice[2][2];
	cout<<"\nIl numero maggiore della riga da lei scelta e': "<<max<<" mentre quello della colonna e': "<<max1;
	if(max > max1)
		cout<<"\n\nStampa della somma della Diagonale Principale: "<<sommad;
	return 0;
}
