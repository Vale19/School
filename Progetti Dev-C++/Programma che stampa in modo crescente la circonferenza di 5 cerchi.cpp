//Powered by Valentin Ichim
#include <iostream>
using namespace std;
float a,b,c;

int main(){
	int i = 0;
	cout<<"Programma che stampa in modo crescente la circonferenza di 5 cerchi \n\n";
	while (i == 0) {
		cout << "[1] Visualizza solo il numero minore\n[2] Visualizza tutti i numeri\n";
		cin >> c;
		if (c != 1 && c != 2)
			cout << "\nLa scelta effetuta non e' corretta\n";
		else
			i++;
	}
	cout << "\nInserisci il raggio\n";
	cin >> a;
	b = a * 2 * 3, 14;
	cout << "\n";
	if (c == 1)
		cout << "\nLa circonferenza e' di: " << b << "\n";
	else if (c == 2) {
		for (i = 0; i < 5; i++) {
			cout << "\nLa circonferenza della " << i + 1 << " figura e' di: " << b << "\n";
			b = b * 2;
		}
	}
}
