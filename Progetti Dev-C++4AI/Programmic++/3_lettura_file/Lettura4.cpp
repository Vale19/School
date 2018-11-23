#include <iostream>
#include <fstream>

using namespace std;

int main(){
	fstream f2; //Dichiara<zione del file
	int t1, t2, i = 0, a[50];
	
	f2.open("C:\\Users\N10_4A\\Desktop\\Programmic++\\2_lettura file\\dati.txt", ios::in);
	f2 >> t1 >> t2;
	
	while(!f2.eof()){
		if(t1 == t2)
			a[i] = t1;
		i++;
	}
	
	for(int j = 0; j < i; j++)
		cout << a[j] << endl;
}
