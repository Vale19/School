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
	4) Stampare i dati relativi al fim straniero che ha ottenuto più incassi
	5) Ordinare la tabella secondo l'incasso crescente 
*/
using namespace std;

struct film{
	string autore;
	string titolo;
	string nazionalita;
	float incasso;
};
int i = 0;
film films[100];

void riempimento ();
void media ();
void sdati ();

int main(){
	riempimento ();
	
	media();
	
	sdati ();
}


void riempimento (){
	float in;
	string au, ti, na;
	
	fstream f1;
	f1.open("C:\\Users\\Valentin\\Desktop\\Progetti Dev-C++4AI\\festival_cinematografico.txt", ios :: in);
	f1 >> au >> ti >> in >> na;
	
	while(!f1.eof()){
		films[i].autore = au;
		films[i].titolo = ti;
		films[i].incasso = in;
		films[i].nazionalita = na;
		
		i++;
		
		f1 >> films[i].autore >> films[i].titolo >> films[i].incasso >> films[i].nazionalita;
	}
}

void media (){
	float mediaa, somma = 0;
	string nautore;
	int cont = 0;
	
	cout << "\nQual e' l'autore che ti interessa? ";
	cin >> nautore;
	for(int j = 0; j < i; j++){
		if(nautore == films[j].autore){
			cont++;
			
			somma =  somma + films[j].autore;
		}
	}
		
	if(somma > 1){
		mediaa = somma / cont;
		cout << "\nLa media degli incassi dell'autore da te scelto e': " << mediaa;
	}
	
}

void sdati (){
	string titolo_n;
	cout << "\nQual e' il titolo del film? \n";
	cin >> titolo_n;
	
	for(int j = 0; j < i; j++)
		if(titolo_n == films[j].titolo)
			cout << films[j].autore >> films[j].titolo >> films[j].incasso << films[j].nazionalita;

}
