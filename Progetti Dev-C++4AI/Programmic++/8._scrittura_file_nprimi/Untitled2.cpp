#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main () {
	bool primo;
	fstream f1;
	f1.open("primi.txt");
	for (int i = 10; i < 1000; i = i+2) {
		primo = true;
		for(int j = 1; j < i-1; j = j+2)
			if(i % j == 0){
				primo = false;
				break;
			}
				
		if(primo == true)
			f1 << i << endl;
	}
}
