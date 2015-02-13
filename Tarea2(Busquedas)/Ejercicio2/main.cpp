#include <iostream>
#include<cstdlib>
#include<string>
#include "Ordenamiento.h"
using namespace std;
//Realice un programa que genere aleatoriamente 1000 cadenas de caracteres  e imprima el arreglo resultante de
//ordenarlas ascendente y descendentemente, utilizando el método de la clase Ordenamiento seleccionado por el usuario.

int main()
{
    const int n = 100;
    int forma;
    int ordena;
    string arreglo[n];
    for (int j = 0; j < n; j++){
        int tam = 10+rand()%10;
        string cadena = "";
        for (int i = 0; i < tam; i++){
            cadena += (char)(rand()%10+'a');
        }
        arreglo[j] = cadena;
    }

    cout << "Tipo de ordenamiento:\n 1.Burbuja.\n 2.Insercion.\n 3.Seleccion.\n";
    cin >> ordena;
    cout << "Tipo de orden:\n 1.Ascendente.\n 2.Descendente.\n ";
    cin >> forma;

switch(ordena)
{
case 1:
     if(forma == 1)
     {
        Ordenamiento<string>::ordenar(arreglo,n,Ordenamiento<string>::asc,Ordenamiento<string>::burbuja);
     }
     if(forma == 2)
     {
        Ordenamiento<string>::ordenar(arreglo,n,Ordenamiento<string>::desc,Ordenamiento<string>::burbuja);
     }
    break;

case 2:
     if(forma == 1)
     {
        Ordenamiento<string>::ordenar(arreglo,n,Ordenamiento<string>::asc,Ordenamiento<string>::insercion);
     }
     if(forma == 2)
     {
        Ordenamiento<string>::ordenar(arreglo,n,Ordenamiento<string>::desc,Ordenamiento<string>::insercion);
     }
    break;

case 3:
    if(forma == 1)
     {
        Ordenamiento<string>::ordenar(arreglo,n,Ordenamiento<string>::asc,Ordenamiento<string>::seleccion);
     }
     if(forma == 2)
     {
        Ordenamiento<string>::ordenar(arreglo,n,Ordenamiento<string>::desc,Ordenamiento<string>::seleccion);
     }
default:
    break;
}

    for(int i = 0; i<n; i++)
    {
        cout<<i<< " "<<arreglo[i]<<endl;
    }


    return 0;
}
