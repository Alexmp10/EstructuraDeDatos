#ifndef BUSQUEDAGENERICA_H
#define BUSQUEDAGENERICA_H

template <typename T>
class BusquedaGenerica
{
    public:
        static int busquedaSecuencialPosicion(T [], T , int );
        static int busquedaBinariaPosicion(T [], T, int, int);
};

//Implementaciones de variantes que regresan la posicion

template <typename T>
int BusquedaGenerica<T>::busquedaSecuencialPosicion(T v[], T valor, int longitud)
{
    int existe = -1;
    int indice = 0;

    if (longitud <= 0) return -1;

    while (existe == -1 && indice < longitud) {
        if (v[indice] == valor) {
            existe = indice;
        }
        ++indice;
    }

    return existe;
}

template <typename T>
int BusquedaGenerica<T>::busquedaBinariaPosicion(T v[], T valor, int inferior, int superior)
{
    if (inferior >= superior)
    {
        return -1;
    }
    else  {
        int mitad = (inferior + superior) / 2;

        if (v[mitad] == valor) {
            return mitad;
        }
        else if (valor < v[mitad])
            return busquedaBinariaPosicion(v, valor, inferior, mitad);
        else
            return busquedaBinariaPosicion(v, valor, mitad + 1, superior);
    }
}

#endif // BUSQUEDAGENERICA_H
