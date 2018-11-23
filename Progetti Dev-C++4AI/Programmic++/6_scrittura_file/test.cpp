//sbagliato
//Librerie
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	fstream f1;
	f1.open("Dati.txt");
	bool primo = false;
	
	for (int i = 1; i < 1000; i = i+2){
		for (int j = i-1; j > 1; j = j - 2){
			if (i % j) {
				primo = true;
			} else {
				//no primo
				primo = false;
				break;
			}
			
			
		}
		if (primo){
			f1 << i << endl;
			cout << i << endl;
		}
	}
		
	return 0;
}
