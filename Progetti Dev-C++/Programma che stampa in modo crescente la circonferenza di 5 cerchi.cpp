//Powered by Valentin Ichim
#include <iostream>
using namespace std;
float a,b,c;

int main(){
	int i = 0;
	cout<<"Programma che stampa in modo crescente la circonferenza di 5 cerchi \n\n";
	while (i == 0) {
		cout << "[1] Visualizza solo il numero minore\n[2] Visualizza tutti i numeri\n";
		cin >> a;
		if (a != 1 && a != 2)
			cout << "\nLa scelta effetuta non e' corretta\n";
		else
			i++;
	}
	cout << "\nInserisci il raggio\n";
	cin >> b;
	c = b * 2 * 3, 14;
	cout << "\n";
	if (a == 1)
		cout << "\nLa circonferenza e' di: " << c << "\n";
	else if (a == 2) {
		for (i = 0; i < 5; i++) {
			cout << "\nLa circonferenza della " << i + 1 << " figura e' di: " << c << "\n";
			c = c * 2;
		}
	}
}
