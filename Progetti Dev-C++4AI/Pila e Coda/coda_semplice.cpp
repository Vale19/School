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
	vettura *coda;
	public:
	cuda(){
		testa=NULL;
		coda=NULL;
	}
	void inserimento(){
		vettura *p;
		p=new(vettura);
		cout<<"ins targa: ";
		cin>>p->targa;
		cout<<"ins modello: ";
		cin>>p->modello;
		if(coda==NULL){
			coda=p;
			testa=p;
		}else{
			testa->next=p;
			testa=testa->next;
		}
		p->next=NULL;
	}
	void estrazione(){
		if(coda!=NULL){
		vettura *p;
		p=coda;
		cout<<p->targa<<" "<<p->modello<<endl;
		coda=coda->next;
		delete p;
		}
	}
	void stampa(){
		if(coda!=NULL){
			vettura *p;
			for(p=coda;p!=NULL;p=p->next){
				cout<<p->targa<<" "<<p->modello<<endl;
			}
		}
	}
	~cuda(){
		while(coda!=NULL){
		vettura *p;
		p=coda;
		coda=coda->next;
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
