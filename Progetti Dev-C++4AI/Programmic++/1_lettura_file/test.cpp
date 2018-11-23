#include <iostream>
#include <fstream>
using namespace std;

int main(){
	fstream f1;//f1 e' il nome del file
	string cognome,cogmax;
	float num,media;
	float tot=0,nummax;
	int cont=0;
	struct studente{
		string cognome;
		float cognome
	};
	f1.open("C:\\Temp\\Studenti.txt",ios::in);//collega il nome logico f1 del programma con
	//il nome del file in memoria di massa
	f1>>cognome>>num;//lettura del primo record del file,detta lettura fuori ciclo
	cogmax=cognome;
	nummax=num;
	while(!f1.eof())
	{
		cont++;
		if(num>nummax)
			cogmax=cognome;
			nummax=num;
		tot=tot+num;
		f1>>cognome>>num;
		
	}
	media=tot/cont;
	cout<<"media="<<media<<endl;
	cout<<"cognome alunno max eta="<<cogmax<<" la sua eta="<<nummax<<endl;
	f1.close();
	
	return 0;
}



