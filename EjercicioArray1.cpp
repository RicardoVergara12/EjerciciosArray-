#include<iostream>
/*Suma de Elementos
Escribe un programa que almacene N números en un arreglo y calcule la suma de sus elementos.*/
using namespace std;

int main(){

 int numeros[]={1,2,3,4,5},suma=0;

 for (int i = 0; i < 5; i++)
 {
    suma+= numeros[i];
 }
  cout<<"La suma de todos los elementos es de: "<<suma<<endl;


    return 0;
}
