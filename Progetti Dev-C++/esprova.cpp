//Powered by Valentin Ichim
/*
Fare un programma in C++ che dopo aver riempito un array di 10 numeri e una matrice (3x3) con numeri random positivi e minori di 150.5,
stampi la posizione del massimo dell'array dopo aver verificato che il massimo della matrice è compreso tra 40 e 100,
altrimenti stampi la posizione del numero più piccolo contenuto nell'array. Successivamente riempire una seconda matrice (3x3)
contenente numeri compresi tra -12 e 121 se la media dei numeri contenuti nell'array è superiore a 100, altrimenti riempire
una matrice da tastiera con numeri compresi tra 49 e 89. FARE USO OTTIMIZZATO di FUNZIONI e PROCEDURE.
*/
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
 
using namespace std;
 
const int N = 3;
 
float max_array(float array[]){
    int n = sizeof(array)/sizeof(array[0]);
    float max = array[0];
    for(int i = 0; i < n; i++)
        if(max < array[i])
            max = array[i];
       
    return max;
}
 
float min_array(float array[]){
    int n = sizeof(array)/sizeof(array[0]);
    float min = array[0];
    for(int i = 0; i < n; i++)
        if(min > array[i])
            min = array[i];
   
    return min;
}
 
float max_matrix(float matrix[N][N]){
    float max = matrix[0][0];
    for(int i = 0; i < N; i++)
        for(int i1 = 0; i1 < N; i1++)
            if(max < matrix[i][i1])
                max = matrix[i][i1];
       
    return max;
}
 
float min_matrix(float matrix[N][N]){
    float min = matrix[0][0];
    for(int i = 0; i < N; i++)
        for(int i1 = 0; i1 < N; i1++)
            if(min > matrix[i][i1])
                min = matrix[i][i1];
   
    return min;
}
 
float pos_max_array(float array[]){
    int n = sizeof(array)/sizeof(array[0]);
    float max = array[0];
    int pos;
    for(int i = 0; i < n; i++)
        if(max < array[i]){
            max = array[i];
            pos = i;
        }
       
    return pos;
}
 
float pos_min_array(float array[]){
    int n = sizeof(array)/sizeof(array[0]);
    float min = array[0];
    int pos;
    for(int i = 0; i < n; i++)
        if(min > array[i]){
            min = array[i];
            pos = i;
        }
       
    return pos;
}
 
float media_array(float array[]){
    int n = sizeof(array)/sizeof(array[0]);
    float somm;
    for(int i = 0; i < n; i++)
        somm += array[i];
       
    return somm/n;
   
}
 
float random(float max, float min){
    return (float)rand() / (RAND_MAX/(max - min)) + min;
}
 
void fill_matrix(float matrice[N][N], float max, float min){
    for(int i = 0; i < N; i++)
        for(int i1 = 0; i1 < N; i1++)
            matrice[i][i1] = random(max, min);
}
 
void fill_matrix_man(float matrice[N][N], float max, float min){
    for(int i = 0; i < N; i++)
        for(int i1 = 0; i1 < N; i1++){
            cout << "Inserisci il numero: ";
            cin >> matrice[i][i1];
            if (!(matrice[i][i1] > min && matrice[i][i1] < max))
                i1--;
        }
}
 
void fill_array(float array[], float max, float min){
    for(int i = 0; i < 10; i++)
        array[i] = random(max, min);
}
 
 
int main(){
    srand(time(NULL));
    float matrice1[N][N], matrice2[N][N], array[10];
   
    fill_array(array, 150.5, 0);
    fill_matrix(matrice1, 150.5, 0);
   
    if (max_matrix(matrice1) > 40 && max_matrix(matrice1) < 100)
        cout << "Posizione massima: " << pos_max_array(array) << endl;
    else
        cout << "Posizione minima: " << pos_min_array(array) << endl;
   
    if (media_array(array) > 100)  
        fill_matrix(matrice1, 121, -12);
    else
        fill_matrix_man(matrice1, 89, 49);
}
