#ifndef BUSQUEDAGENERICA_H
#define BUSQUEDAGENERICA_H

template <typename T>
class BusquedaGenerica
{
    public:
        static int busquedaSecuencialPosicion(T [], T , int );
        //static bool busquedaBinaria(T [], T, int, int);
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
#endif // BUSQUEDAGENERICA_H
