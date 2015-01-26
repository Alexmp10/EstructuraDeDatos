#ifndef BUSQUEDAGENERICA_H
#define BUSQUEDAGENERICA_H

#include <iostream>

template <class T>
class BusquedaGenerica
{
    public:
        static bool busquedaSecuencial(T v[], T valor, int longitud)
{
    bool existe = false;
    int indice = 0;

    if(longitud <= 0) return false;

    while(!existe && indice < longitud)
    {
        if(v[indice] == valor)
        {
            existe = true;
        }
        indice++;
    }
    return existe;
}
};



#endif // BUSQUEDAGENERICA_H
