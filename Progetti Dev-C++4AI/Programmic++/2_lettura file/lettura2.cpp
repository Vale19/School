#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int a[50], temp1, temp2, i = 0;
	
	fstream f1;
	f1.open("C:\\Users\\N10_4A\\Desktop\\Programmic++\\2_lettura file\\dati.txt", ios::in);
	f1 >> temp1 >> temp2;
	
	while (!f1.eof()) {
		if (temp1 == temp2) {
			a[i] = temp1;
			i++;
		}
		f1 >> temp1 >> temp2;
	}
	
	for (int j = 0; j < i; j++)
		cout << a[j];
}

