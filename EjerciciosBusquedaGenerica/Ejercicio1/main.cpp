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

    for (int i = 0; i < longitud; ++i) {
        enteros[i] = i;
    }

    imprimeArreglo<int>(enteros, longitud);

    cout<<"Introduce numero a buscar.\n";
    int valor;
    cin>>valor;

    int existe = BusquedaGenerica<int>::busquedaSecuencialPosicion( enteros, valor, longitud);

      if (existe) {
        std::cout << "El valor si existe en el arreglo" << std::endl;
    }
    else {
        std::cout << "El valor no existe en el arreglo" << std::endl;
    }


    return 0;
}


template <typename T>
void imprimeArreglo(T v[], int longitud)
{
    for (int i = 0; i < longitud; ++i) {
        std::cout << v[i] << " ";
    }

    std::cout << std::endl;
}
