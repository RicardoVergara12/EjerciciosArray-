#include <iostream>
/*Promedio de un Arreglo
Solicita N números, guárdalos en un arreglo y calcula el promedio.*/
using namespace std;
int main(){

 int numeros[100],n,suma=0;

 cout<<"Please enter the numbers of elements that you wish the array to have, so theN we can calculate the average :)"<<endl;
 cin>>n;
 for (int i = 0; i < n; i++)
 {
    cout<<i+1<<".Enter the number: "<<endl;
    cin>>numeros[i];
    suma+=numeros[i];
   
 }
  cout<<"The sum of all the elements of the array is: "<<suma<<endl;

    return 0;
}  
