//Object Oriented
#include <iostream>
using namespace std;

class dipendente{
	public:
		int codice;
	private:
		float stipendio;
	public:
		float 	GetStipendio(){
			return stipendio;
		}
		void SetStipendio (float s){
			stipendio = s;
		}
		
};
int main(){
	dipendente d1;
	d1.codice = 123;
	d1.SetStipendio (3000);
	cout << "codice " << d1.codice << endl << "stipendio " << d1.GetStipendio();
	return 0;
}
