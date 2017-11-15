//Powered by Valentin Ichim
#include <iostream>
using namespace std;
/*Fare un programma in C++ che stampi il numero 2 finchè un utente non schiacci
da tastiera il pulsante contenente la lettera 'n' .
*/
int main(){
   	char a;
   	cout<<"Inserisci la lettera chiave per far terminare il programma \n";
	cin>>a;
	bool cond=(a>'n'||a<'n');
	while(cond){
		cout<<"2\n\n";
	}
	return 0;
}
