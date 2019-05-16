#include <iostream>
#include <fstream>
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
		cout<<"Inserisci targa: ";
		cin>>p->targa;
		cout<<"Inserisci modello: ";
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
	/*void ordina_vettore(){
		vettura *p;
		int i=0;
		for(p=testa; p!=NULL; p=p->next){
			if(p->modello==mod){
				v[i]=p->targa;
				i++;
			}
		}
		int n=i;
		cout<<"Stampa contenuto array\n";
		for(int i=0; i<n; i++)
			cout<<"Targa = "<<v[i]<<endl;
		//Ordinamento
		cout<<"Ordinamento array\n";
		string appo;
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(v[j])<v[i]){
					appo=v[i];
					v[i]=v[j];
					v[j]=v[i];
			}
			cout<<"Stampa contenuto array ordinato\n";
			for(i=0; i<n; i++)
				cout<<"Targa = "<<v[i]<<endl;
			}
		}
	}*/
	void salvataggio(){
		vettura*p;
		fstream f1;
		f1.open("C:\\Users\\Valentin\\Desktop\\Pila.txt", ios::out);
		
		cout<<"Salvataggio in corso delle modifiche sul file...\n\n";
		for(p=testa; p!=NULL; p=p->next){
			cout<<p->targa<<" "<<p->modello<<endl;
			//Gestione File
			f1<<p->targa<<" "<<p->modello<<endl;
		}
		f1.close();
	}
	void stampa(){
		if(testa!=NULL){
			vettura *p;
			for(p=testa;p!=NULL;p=p->next){
				cout<<p->targa<<" "<<p->modello<<endl;
			}
		}
	}
	~cuda(){			//Distruttore: distrugge gli elementi presenti nella pila
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
	cout<<"gyg\n";
	do{
		cout<<"0.esci\n1.inserimento\n2.estrazione\n3.salvataggio su file\n4.stampa\n";
		cin>>scelta;
		switch(scelta){
			case 1:
				garage.inserimento();
			break;
			case 2:
				garage.estrazione();
			break;
			case 3:
				garage.salvataggio();
			break;
			case 4:
				garage.stampa();
			break;
		}
	}while(scelta!=0);
	return 1;
}
