//Librerie
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	fstream f1;
	f1.open("Dati.txt");
	
	for (int i = 0; i < 10000; i++)
		f1 << i << i*i;
		
	return 0;
}
