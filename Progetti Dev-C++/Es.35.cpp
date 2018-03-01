//Powered by Valentin Ichim
#include<iostream>
#include<string>
#include<cstdlib>
#include <ctime>
/*
    Fare un programma in C++ che inserisca numeri casuali in un array.
*/
using namespace std;
int main(){
   
    //Dichiarazione variabili
    int i;
    float array[10],somma=0,media,numerirandom,numeroreale;
    bool fine = false;
    string numcas;//Numeri Casuali
    //Inizio Ciclo Do-While / Post-condizionato
    srand ( time (0) );
    cout<<"\nDesideri generare 10 numeri casuali? [si/no]\n"<<endl;
    cin>>numcas;
    if(numcas == "si" || numcas == "Si" || numcas == "sI" || numcas == "SI"){
        do{
           
                //Calcolo per i valori random dei numeri
                for(i = 0; i < 10; i++){
                    numeroreale = (float) rand() / RAND_MAX;
                    array[i] = numeroreale; //Riempimento dell'array con numeri randomici generati
                    //Calcolo Somma
                    somma += array[i];
               
                }
            //Calcolo Media
            media = somma / 10;
            //Stampa numeri randomici generati
            cout << "\nI numeri random che sono sati generati sono: "; 
            for(i =0; i < 10; i++){
                if (array[i] >= 5 || array[i] <= 10)
                    cout << "\n" << array[i];
            }
            fine = true;
        }
        while(fine == false);
        //Fine ciclo
        //Stampa somma e media dei numeri randomici
        cout<<"\n\nLa somma equivale a "<<somma<<" mentre la media e' "<<media<<".\n\n";
   
    return 0;
    }
}
