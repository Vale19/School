/*
Testo del programma:

Gestione visite mediche:
Fare menu:
1) Inserire il cognome del paziente in 1 array.
2) Chiamata visita:
	Shiftare verso l'alto l'array.
3) Stampa cognome paziente.
4) Salvataggio su file dell'array.
Se arriva un paziente con maggiore priorita' lo si fa passare avanti.
*/
//Librerie
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//Dichiarazione variabili globali
int np = 0;
string array[1000];
//Prototipazione Funzioni & Procedure
void inserimento_paz ();
void chiamata_visita ();
void salvataggio ();
void ripristina ();
int main ()
{
	int scelta;
	do
	{
		cout << "                                                     MENU'                                                  \n";
		cout << "Ripristinare la lista [1]\nAggiungere paziente [2]\nChiamare prossimo paziente [3]\nStampare lista pazienti [4]\nSe vuoi uscire [0]\n";
		cin >> scelta;
		switch (scelta)
		{
			case 1:
				ripristina ();
				break;
			case 2:
				inserimento_paz ();
				break;
			case 3:
				chiamata_visita ();
				break;
			case 4:
				cout << "Lista: \n";
				for(int i = 0; i < np; i++)
					cout << i + 1 << ") " << array[i] << endl;					
				break;
		}
		system ("pause");
		system("cls");
	}while (scelta != 0);
	salvataggio ();
	return 0;
	
}
void inserimento_paz ()
{
	string priorita;
	cout << "Se il paziente ha maggiore priorita' degli altri in lista digitare [Si]: ";
	cin >> priorita;
	if(priorita == "si" || priorita == "Si" || priorita == "SI" || priorita == "sI")
	{
		for (int i = np; i > 0; i--)
			array[i] = array[i-1];
		cout << "Inserisci il cognome del paziente prioritario da aggiungere alla lista: ";
		cin >> array[0];
		np++;
	}else 
	{
		cout << "Inserisci il cognome del paziente da aggiungere alla lista: ";
		cin >> array[np];
		np++;
	}
}
void chiamata_visita ()
{
	cout << "Il paziente " << array[0] << " deve essere visitato\n";
	for(int i = 0;i < np; i++)
		array[i] = array[i+1];
	np--;
}
void salvataggio ()
{
	fstream f1;
	f1.open("D:\\C++\\C++ 4\\File\\Gestione_paz.txt",ios::out);
	for(int i = 0; i < np; i++)
		f1 << array[i] << endl;
	f1.close();	
}
void ripristina ()
{
	fstream f2;
	cout << "La lista precedente e': \n";
	f2.open("D:\\C++\\C++ 4\\File\\Gestione_paz.txt",ios::in);	
	f2 >> array[0];
	cout << array[0] << endl;
	while(!f2.eof())
	{
		np++;
		f2 >> array[np];
		cout << array[np] << endl;
	}
	f2.close();
}
