//Powered by Valentin Ichim
#include <iostream>
using namespace std;
/*
	Inserire in un matrice 20 valori e, per ogni riga, stamparne il maggiore.
*/
int main(){
	float matrix[10][10], max1 = 0, n = 0;
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			cout<<"Inserisci riga: "<<i<<"; colonna: "<<j<<endl;
			cin>>matrix[i][j];
		}
	}
		for(int i = 0; i < 10; i++){
			for(int j = 0; j < 10; j++){
				if(matrix[i][j] > max1)
					max1 = matrix[i][j];
			}
			cout<<"Il numero più grande della riga "<<i<<" e': "<<max1<<endl<<endl;
			max1 = 0;
		}
	return 0;
}
