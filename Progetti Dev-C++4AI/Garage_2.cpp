#include <iostream>
#include <string>
using namespace std;
 
struct vettura{
    string targa;
    int cil;
    struct vettura*next;
    string s_targa[];
};
 
class cronologia{
     vettura*testa;
     
     public:
        cronologia(){ //costruttore
            testa = NULL; //Inizializzazione della pila a vuoto
        }
        void push(string ntarga, int ncil){ //Inserisce un elemento in testa alla lista
            vettura*p;
            p = new(vettura);
            p -> targa = ntarga;
            p -> cil = ncil;
            p -> next = testa;
            testa = p;
        }
       
        void stampa(){
            vettura*p;
            if(testa == NULL)
                cout << "Non ci sono autovetture disponibili\n";
            else{
                cout << "ELENCO AUTOVETTURE DISPONIBILI\n";
                for(p = testa; p != NULL; p = p -> next)
                    cout << p -> targa << "\t\t" << p -> cil << endl;
            }
        }
        ~ cronologia(){
            vettura*p;
           
            while(testa != NULL){
                p = testa;
                testa = testa -> next;
                delete (p);
            }
        }
};
 
class pila{
     vettura*testa;
     
     public:
        cronologia salvatarga;
        pila(){ //costruttore
            testa = NULL; //Inizializzazione della pila a vuoto
        }
       
        void push(){ //Inserisce un elemento in testa alla lista
            vettura*p;
            p = new(vettura);
            cout << "Numero di targa\n";
            cin >> p -> targa;
            cout << "Cilindrata\n";
            cin >> p -> cil;
            p -> next = testa;
            testa = p;
            salvatarga.push(p -> targa, p -> cil);
        }
       
        void pop(){ //Estrae un elemento dalla testa della pila
            vettura*p;
            if(testa == NULL)
                cout << "Non ci sono autovetture disponibili, attendere...\n";
            else{
                p = testa;
                testa = p -> next;
                cout << "La vettura assegnata ha targa " << p -> targa << " e cilindrata " << p -> cil << endl;
                delete p;
            }
           
        }
        void stampa(){
            vettura*p;
            if(testa == NULL)
                cout << "Non ci sono autovetture disponibili\n";
            else{
                cout << "ELENCO AUTOVETTURE DISPONIBILI\n";
                for(p = testa; p != NULL; p = p -> next)
                    cout << p -> targa << "\t\t" << p -> cil << endl;
            }
        }
       
        void stampaStorico(){
            salvatarga.stampa();
        }
       
        ~ pila(){
            vettura*p;
           
            while(testa != NULL){
                p = testa;
                testa = testa -> next;
                delete (p);
            }
        }
};
 
 
 
int main(){
    int scelta;
    pila garage;
   
    do{
        cout << "1.Inserisci auto (push)\n";
        cout << "2.Elimina auto (pop)\n";
        cout << "3.Stampa elenco auto presenti nel garage\n";
        cout << "4.Stampa elenco completo delle auto presenti nel garage\n";
        cout << "0.Esci\n";
        cout << "Fai una scelta\n";
        cin >> scelta;
        switch (scelta){
            case 1:
                garage.push();
            break;
            case 2:
                garage.pop();
            break;
            case 3:
                garage.stampa();
            break;
            case 4:
                garage.stampaStorico();
            break;
        }
    }
    while(scelta != 0);
}
