#include <iostream>
#include <cstdlib>
#include "BusquedaGenerica.h"

using namespace std;

template <typename T>
void imprimeArreglo(T [], int);

int main()
{
    const int longitud = 10;
    int enteros[longitud];

    for(int i = 0; i<longitud; ++i)
    {
        enteros[i]= rand()%100;
    }

    imprimeArreglo(enteros,longitud);

    cout << "Entre el elemento a buscar: ";
    int valor;
    cin>> valor;
   bool existe= BusquedaGenerica<int>::busquedaSecuencial(enteros,valor, longitud);

    if(existe)
    {
        cout<<"El valor si existe en el arreglo\n";
    }
    else{
         cout<<"El valor no existe en el arreglo\n";
    }

//Libros
const int nLibros = 3;
Libro biblioteca[nlibros];
biblioteca[0]=Libro();
biblioteca[1]=Libro()

    return 0;
}

template <typename T>
void imprimeArreglo (T v[], int longitud)
{
    for(int i =0; i<longitud;++i)
    {
        cout<<v[i] <<" ";
    }
    cout<<endl;
}
