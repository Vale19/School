//Powered by Valentin Ichim
#include <iostream>
#include <string>
/*
	Siano forniti i nomi e i voti riportati da una serie di studenti in un compito in classe. 
	Un voto fittizio pari a 0 significa che lo studente era assente.
	Stampa della media dei voti non prendendo in considerazione le assenze; 
	Stampa del nome delo studente che ha riportato il voto massimo;
	Elenco degli studenti insufficienti (voto < 6);
	Percentuale degli studenti assenti
*/
int nalunni;
int ninsufficienti;
int passenti;
int calsse[40];
using namespace std;
struct studente{
	string cognome;
	string nome;
	float voto;
};
int main(){
	carica();
}
void carica(){
	cout<<"Quanti sono gli alunni della classe?\n";
	cin>>nalunni;
	for( int i = 0; i < nalunni; i++ ){
		cout<<"\nInserisci nome e cognome del "<<i+1<<" alunno (digita e per uscire)\n";
		cin>>studente.nome[i]>>studente.cognome[i];
		if( studente.nome[i] == 'e')
			break;
		else
			cout<<"\nOra inserisci il suo voto (0 se era assente)\n";
			cin>>studente.voto;
	}
}
