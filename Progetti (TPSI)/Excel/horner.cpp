#include <iostream>
#include <math.h>
#include <conio.h>
#include <string.h>

using namespace std;

void bin_dec(long long int num); //Prototipazione bin_dec
int dec_bin(const string src); //Prototipazione dec_bin
int horner(long long int n); //Prototipazione horner

int main(){
	string num;
	long long int num1;
	cout << "1) Decimale binario\n2) Horner (Binario decimale)\n3) Horner (Decimale binario)\n";
	//Lo Switch Getch prende il valore inserito dall'utente come un cin
	switch(_getch()){
		case '2':
			cout << "Inserisci il numero:";
			cin >> num;
			cout << dec_bin(num);//Richiamo Funzione per Lunghezzza Numero
		break;
		case '1':
			cout << "Inserisci il numero:";
			cin >> num1;
			bin_dec(num1);
		break;
		case '3':
			cout << "Inserisci il numero:";
			cin >> num1;
			horner(num1);
		break;
		default:
			cout << "La scelta da lei selezionata e' inesistente!";
		break;
	}
}


//Funzione
void bin_dec(long long int num){
	//Condizione
	if (num <= 1)
		cout << num;
	else {
		bin_dec(num/2);
		//Stampa
		cout << num % 2;//Chiusura del ciclo e stampo al contrario del numero 
	}
}

int dec_bin(const string src){
	int tot;
    tot=0;
    int len = src.size() - 1;//Calcolo Lungheza Stringa
    
    for(int i=len;i>=0;i--)
   		if(src[i]=='1')
			tot += (int)pow(2.0,len-i);
    return tot;
}

int horner(long long int n){
  int p = 1;
  //Calcolo potenza maggiore <= numero n
  while (p <= n) {
    p = p * 2;
  }
  p = p / 2;
  //Ripetiamo finchè la potenza è diversa da zero
  while (p != 0) {
  	//Se la portenza è minore del numero scriviamo uno
    if (n >= p) {
    	cout << "1";
		n = n - p;
    } else {
    	//Altrimenti scriviamo zero
    	cout << "0";
    }
    //Dopodichè dimezziamo il valore della potenza
    p = p / 2;
  }
}
