//Librerie
#include <iostream>
#include <fstream>
#include <string>

/*
	Su un file sono caricati i dati di un festival cinematografico, ed ogni record del file contiene: titolo, autore,
	incasso e nazionalità.
	1) Caricare il file su di una tabella
	2) Stampare l'incasso medio dei film di un determinato autore
	3) Stampare i dati di un film il cui titolo è fornito in input
	4) Stampare i dati relativi al film straniero che ha ottenuto più incassi
	5) Ordinare la tabella secondo l'incasso crescente 
*/
using namespace std;

struct film{
	string autore;
	string titolo;
	string nazionalita;
	double incasso;
};
int i = 0;
film films[100];


void riempimento ();
void media ();
void sdati ();
void fstraniero ();
void ordine ();

int main(){
	riempimento ();
	
	media();
	
	
	sdati ();
	
	fstraniero ();
	
}

	
void riempimento (){
	fstream f1;
	double in;
	string au, ti, na;
	
	f1.open("C:\\Users\\Valentin\\Desktop\\Progetti Dev-C++4AI\\docum.txt",ios::in);
	f1 >> au >> ti >> in >> na;
	
	while(!f1.eof()){
		films[i].autore = au;
		films[i].titolo = ti;
		films[i].incasso = in;
		films[i].nazionalita = na;
		
		i++;
		
		f1 >> au >> ti >> in >> na;
	}
}

void media (){
	double mediaa, somma = 0;
	string nautore;
	int cont = 0;
	
	cout << "\nInserisci il nome dell'autore del quale desideri sapere la media incassi: ";
	cin >> nautore;
	for(int j = 0; j < i; j++){
		if(films[j].autore == nautore){
			cont++;
			
			somma += films[j].incasso;
		}
	}
	
	mediaa = somma / cont;
	cout << "\nLa media degli incassi dell'autore da te scelto e': " << mediaa;
}

void sdati (){
	string titolo_n;
	cout << "\nQual e' il titolo del film? \n";
	cin >> titolo_n;
	
	for(int j = 0; j < i; j++)
		if(titolo_n == films[j].titolo)
			cout << films[j].autore << " " << films[j].titolo << " " << films[j].incasso << " " << films[j].nazionalita;

}

void fstraniero(){
	int cont = 0;
	string nom = films[0].nazionalita;
	float max = 0;
	for(int j = 0; j < i; j++){
		if(films[j].nazionalita != nom && films[j].incasso > max){
			max = films[j].incasso;
			cont++;
		}	
	}
	cout << "\nIl film straniero con piu' incassi e' questo: " << films[cont].autore << " " << films[cont].titolo << " " << films[cont].incasso << " " << films[cont].nazionalita;
	
}

/*{
	double imax = films[0].incasso;
	int cont = 0;
	
	if(films[0].incasso < films[1].incasso){
		films[0].incasso = films[1].incasso;
		films[1].incasso = films[1].incasso;
	}
	
	for(int j = 0; j < i; j++){
		
		if(films[j].incasso > imax){
			imax = films[j].incasso;
			cont++;
		}
	}
	cout << films[cont].autore << " " << films[cont].titolo << " " << films[cont].incasso << " "  << films[cont].nazionalita << endl;
	for(j = 0; j < i; j++){
		if(imax > )
	}
}
*/
