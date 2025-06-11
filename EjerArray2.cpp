#include<iostream>
/*Número Mayor y Menor
Llena un arreglo con N números y encuentra el número mayor y el menor.*/
using namespace std;

int main(){
 
    int numeros[100],mayor=0;
    int N;
    
    cout<<"Please digit the number of elements that the array will have on it"<<endl;
    cin >> N;
    //Primer For para poder crear un bucle en donde segun la cantidad que indique el usuario se vaya generando una listita.
    for (int i = 0; i < N; i++)
    {
        cout<<i+1<<". Digit your number: "<<endl;
        cin >> numeros[i];

        if (numeros[i] > mayor)
        {
            mayor = numeros[i];
        }
        
    }
    
    cout<<"The highest number of the array is: "<<mayor<<endl;
  

    return 0;
}
