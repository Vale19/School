//Powered by Valentin Ichim
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string.h>
using namespace std;
/*
    Fare un programma che per 5 volte riempia due matrici 3x3 con numeri casuali compresi tra -15.7 e 12.4 ( la prima )
    e numeri interi negativi ( la seconda ). Dopo ogni riempimento inserisca in un array di 5 elementi il valore TRUE
    se il numero maggiore della prima matrice e' superiore al maggiore della seconda. Altrimenti insersisca FALSE. Concludere
    poi il programma precedente stampando il numero di volte che si ha TRUE e FALSE.
*/
const int RIGA = 3, COLONNA = 3, A = 5;
int main(){
    int array[A], ntrue = 0 , nfalse = 0;//Array contenente valori TRUE, FALSE
    float matrice[RIGA][COLONNA], matrice1[RIGA][COLONNA], nmax = -16, nmax1 = -101;//Prima Matrice, Seconda Matrice
    string TRUE = "TRUE", FALSE = "FALSE"; //Variabili Booleane
    srand(time(NULL));
    for(int i = 0; i < A; i++){
        for(int j = 0; j < RIGA; j++){
            for(int v = 0; v < COLONNA; v++){
                matrice[j][v] = (float) rand() % (12.4 - -15.7 + 1) + -15.7;
                matrice1[j][v] = rand() % rand() 0 + -100;
                if(matrice[j][v] > nmax)
                    nmax = matrice[j][v];
                if(matrice1[j][v] > nmax1)
                    nmax1 = matrice1[j][v];
            }
        }
        if(nmax > nmax1){
            ntrue++;
            array[i] = TRUE;
        }
        else{
            nfalse++;
            array[i] = FALSE;
        }
    }
    for(int i = 0; i < 5; i++)
        cout<<array[i]<<" | ";
    cout<<"Numero di volte che si ha TRUE e FALSE: "<<ntrue<<" | "<<nfalse;
    return 0;
}
