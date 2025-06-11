#include <iostream>
/*Búsqueda de un Número
Pide N números, guárdalos en un arreglo y busca si un número dado por el usuario está en él.*/
using namespace std;

int main()
{

    int numbers[100], n, buscar, option;
    bool encontrado = false;

    cout << "Please enter a number to create an array" << endl;
    cin >> n;
    //Primer for para poder definir el array.
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ".Enter a number: " << endl;
        cin >> numbers[i];
    }
    /*En este punto ya despues de haber definido los numeros para el arreglo, creamos un switch para darle a elegir al usuario si quiere encontrar
     su numero a travez de un menu con un switch.*/
    cout << "Do you wish to search for an specific number into the array?" << endl;
    cout << "1.Yes" << endl;
    cout << "2.No" << endl;
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "Enter the number you want lo look for" << endl;
        cin >> buscar;
        for (int i = 0; i < n; i++)
        {
            if (numbers[i] == buscar)
            {
                encontrado = true;//booleano pasa a ser verdadero cuando el numero del arreglo coincide con el que el usuario digite.
            }
        }if (encontrado)
        {
            cout << "Your number was found! :D" << endl;
        }
        else    //Las dos opciones en dado caso el usuario SI elegio la opcion de buscar por su numero.
        {
            cout << "Your numbers was not found unfornately D:" << endl;
        }
        break;

        

    default:
        cout << "Seems you did not wanted to look for it, so the program is finished. Bye :D!" << endl;
        break;
    }

    return 0;
}
