//Powered by Valentin Ichim
#include <iostream>
using namespace std;

int main(){
	int e;
    char x = 'A';
    char c = 'L';
	cout<<"\nInserisci l'iniziale del nome\n";
	cin>> x;
	cout<<"\nInserisci l'iniziale del cognome\n";
	cin>> c;
	cout<<"\nInserisci l'eta' della persona\n";
	cin>> e;
	if (x >= 'A'){
		if (x <= 'L'){
			cout<<"L'iniziale del nome e'\n"<< x <<"\ne l'eta' e' di\n"<< e <<" anni " ;
		}
	    else{
	            cout<<"L'iniziale del nome e' "<< x <<" e l'iniziale del suo cognome e' "<< c ;
	    }       
	}
	return 0;
}

