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
        enteros[i] = i+1;
    }

    imprimeArreglo<int>(enteros, longitud);

    cout<<"Introduce numero a buscar.\n";
    int valor;
    cin>>valor;

    int existe = BusquedaGenerica<int>::busquedaSecuencialPosicion( enteros, valor, longitud);

      if (existe != -1) {
        std::cout << "La posicion en la que se encuentra es:" <<existe << std::endl;
    }
    else {
        std::cout << "El elemento no existe " <<-1 << std::endl;
    }

    int pos = BusquedaGenerica<int>::busquedaBinariaPosicion(enteros , valor, enteros[0], enteros[longitud]);

     if (pos != -1) {
        std::cout << "La posicion en la que se encuentra es:" <<existe << std::endl;
    }
    else {
        std::cout << "El elemento no existe " <<-1 << std::endl;
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
