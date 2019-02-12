//Powered by Valentin Ichim <3

#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>

using namespace std;

/*
	Creare una classe "Alunno" con 
	Attributi Private:
		1) Nome, Cognome
		2) Voto
	Attributi Public:
		1) Inserisci Dipendenti
		2) Leggi Cognome
		3) Leggi Stipendio
	
	Nel Menu:
	1) Inserisci Dipendente
	2) Stampa Attributi Dipendenti di seguito
*/
const int NMAX = 10;
class alunno{
	private:
		string nome, cognome;
		float voto[NMAX];
		int nvoti;
		 
	public:
		void ins(string passnome[NMAX], string passcognome){
			nome = passnome;
			cognome = passcognome;
		}
		void ins_voti(float passvoto[NMAX], float nvoti){
			cout << "Quanti sono i voti che desideri inserire? \n";
			cin >> nvoti;
			for(int i = 0, i < nvoti; i++){
				cin >> passvoto[i];
			}
			voto[i] = passvoto[i];
		}
		string getnome(){
			return nome;
		}
		string getcognome(){
			return cognome;
		}
		float getvoto(){
			return voto[];
		}
		
};

int main(){
	alunno alunni[NMAX];
	int i = 0, sc, nvoti;
	string nome, cognome;
	float voto[NMAX], nvoti, vot_min;
	float n_sti; //Nuovo Stipendio
	fstream f1;
	
	
	
	do{
		cout << "\n1. Riempimento";
		cout << "\n2. Stampa attributi alunni";
		//cout << "\n3. Cambia stipendio di un dipendente";
		//cout << "\n4. Salvataggio su File\n";
		cin >> sc;
		system ("CLS");
		
		switch(sc){
			case 1:
			
				//for ( i = 0; i < NDIP; i++ ){
					cout << "Inserisci nome e cognome del " << i + 1 << " alunno: \n";
					cin >> nome >> cognome;
					alunni[i].ins_dip(cognome, stipendio, voto[NMAX]);
					
					cout << alunni[i].ins_voti(voto[NMAX], nvoti);
					
					i++;
					//system("CLS");
				//}
				break;
			case 2:
				
				cout << "Stampa dati degli alunni:\n";
				for(i = 0; i < NDIP; i++)
					if(i < 9)
						cout << "Dipendente " << i + 1 << " " << dipendenti[i].getcognome() << "  ||  " << dipendenti[i].getstipendio() << endl;
					else
						cout << "Dipendente " << i + 1 << " " << dipendenti[i].getcognome() << " ||  " << dipendenti[i].getstipendio() << endl;
					//cout << dipendenti[i].getcognome() << " ||  " << dipendenti[i].getstipendio() << endl;
				break;
			/*case 3: 
				cout << "Inserisci il cognome del dipendente [0->9]\n";
				cin >> c;
				cout << "Quale sara' il nuovo stipendio del dipendente? \n";
				cin >> n_sti;
				f1.open("C:\\Users\\Valentin\\Desktop\\dip.txt", ios :: out);C:\\Users\\N10_4A\\Desktop\\dip.txt
				for(i = 0; i < NDIP; i++){
					if(dipendenti[i].getcognome() == c)
						dipendenti[i].getstipendio() = n_sti;
				}
				break;*/
			case 4:
				cout << "Inserisci uno stipendio minimo: \n";
				cin >> sti_min;
				f1.open("C:\\Users\\Valentin\\Desktop\\dip.txt", ios :: out);
				for(i = 0; i < NDIP; i++){
					if(dipendenti[i].getstipendio() > sti_min){
						f1 << dipendenti[i].getcognome() << " " << dipendenti[i].getstipendio() << endl;
					}
				}
				f1.close();
				cout << "\n--- Salvataggio effettuato ---\n";
			case 4:
				file2.open("D:\\Aumenti.txt",ios::in);
				file2>>cog[0]>>stip[0];
				while(!file2.eof()){
					k++;
					file2>>cog[k]>>stip[k];
			}
			for(int i=0;i<k;i++){
				for(int x=0;x<j;x++){
					if(cog[i]==azienda[x].getcog()){
						azienda[x].stipendio=stip[i];
					}
						
				}
			}
			break;
		}
	}
	while(sc != 0);
	

