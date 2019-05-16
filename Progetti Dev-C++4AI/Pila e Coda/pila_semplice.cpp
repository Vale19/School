#include <iostream>
using namespace std;

struct vettura{
	string targa;
	string modello;
	struct vettura *next;
};
int main_cont=0;
class cuda{
	private:
	vettura *testa;
	public:
	cuda(){
		testa=NULL;
	}
	void inserimento(){
		vettura *p;
		p=new(vettura);
		cout<<"ins targa: ";
		cin>>p->targa;
		cout<<"ins modello: ";
		cin>>p->modello;
		if(testa==NULL){
			testa=p;
			p->next=NULL;
		}else{
			p->next=testa;
			testa=p;
		}
	}
	void estrazione(){
		if(testa!=NULL){
		vettura *p;
		p=testa;
		cout<<p->targa<<" "<<p->modello<<endl;
		testa=p->next;
		delete p;
		}
	}
	void stampa(){
		if(testa!=NULL){
			vettura *p;
			for(p=testa;p!=NULL;p=p->next){
				cout<<p->targa<<" "<<p->modello<<endl;
			}
		}
	}
	~cuda(){
		while(testa!=NULL){
		vettura *p;
		p=testa;
		testa=p->next;
		delete p;
		}
	} 
};
int main(){
	cuda garage;
	int scelta;
	cout<<"gyg";
	do{
		cout<<"0.esci\n1.inserimento\n2.estrazione\n3.stampa\n";
		cin>>scelta;
		switch(scelta){
			case 1:
				garage.inserimento();
			break;
			case 2:
				garage.estrazione();
			break;
			case 3:
				garage.stampa();
			break;
		}
	}while(scelta!=0);
	return 1;
}
