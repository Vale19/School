#include <iostream>
/*
Fare un programma in C++ che stampi la maggiore e la minore età di una classe di 10 studenti.
Le età sono inserite in un array e le operazioni richieste si svolgono mediante utilizzo di funzioni apposite laddove possibile,
il resto si faccia nel main().
Successivamente fare una funzione che restituisca il numero di studenti maggiorenni presenti nell’array,
e un’altra che restituisca il numero dei minorenni facendo uso di quella che calcola i maggiorenni.
Stampare nel main() il valore booleano TRUE se il numero dei maggiorenni supera quello dei minorenni
(azione da realizzare con apposita funzione da invocare nel main()).
Modificare il programma sostituendo la stampa finale con un inserimento di elementi TRUE e FALSE in un array specifico.
Successivamente riflettere su come svolgere tale azione nel main(),
ricorrendo ad una procedura ovvero una funzione di tipo void (fare ricerca nel web su questo argomento).
*/
using namespace std;
const int N = 10;//N° studenti
int ARRAY();//Prototipazione della funzione ARRAY
int SMAGG(int *array);//Prototipazione della funzione SMAGG
int SMIN(int *array);//Prototipazione della funzione SMIN
int MAX(int *array);//Prototipazione della funzione MAX
int MIN(int *array);//Prototipazione della funzione MIN
bool MINMAGG(int *array);//Prototipazione della funzione MINMAGG
int main()
{
	int array[N];//Dichiarazione Array
	for (int i = 0; i < N; i++){
		cout << "Inserisci un' eta': ";
		cin >> array[i];
	}
	
	cout << "La maggiore eta' e': " << MAX(array);
	cout << "\nLa minore eta' e': " << MIN(array);
	cout << "\nGli studenti maggiorenni sono: " << SMAGG(array);
	cout << "\nGli studenti minorenni sono: " << SMIN(array);
	cout << "\n+ MAGG che MIN: " << MINMAGG(array);
}


int SMAGG(int *array){
	int num = 0;
	for (int i = 0; i < N; i++)
	{
		if(array[i] >= 18)
			num++;
	}
	return num;
}

int MIN(int *array){
	int num = array[0];
	for (int i = 0; i < N; i++)
	{
		if(array[i] < num)
			num = array[i];
	}
	return num;
}

int MAX(int *array){
	int num = array[0];
	for (int i = 0; i < N; i++)
	{
		if(array[i] > num)
			num = array[i];
	}
	return num;
}


int SMIN(int *array){
	return N - SMAGG(array);
}

bool MINMAGG(int *array){
	if (SMAGG(array) > SMIN(array)) 
		return true;
	else
		return false;
}
