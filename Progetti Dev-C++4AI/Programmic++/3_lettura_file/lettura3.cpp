//inserire le date e i nomi dentro uno struct
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct alunni {
	string nome;
	int data;
};

alunni classe[50];

int input(){
	int i = 0;
	fstream f1;
	f1.open("dati.txt");
	f1 >> classe[i].nome >> classe[i].data;
	
	while (!f1.eof()){
		i++;
		f1 >> classe[i].nome >> classe[i].data;
	}
	return i;
}

void output(int i){
	for (int j = 0; j < i; j++)
		cout << classe[j].nome << classe[j].data << endl;
}

int main(){
	int numeroalunni = input();
	output(numeroalunni);
}

