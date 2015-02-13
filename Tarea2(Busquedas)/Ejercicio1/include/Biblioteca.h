#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <iostream>
#include "Libro.h"
using namespace std;

class Biblioteca
{
        Libro libros[20];
        int index;
    public:
        Biblioteca();
        void Add(Libro libro);
        void Dele(string titulo);
        void mAutor(string autor);
        void mEditorial(string editorial);
        void Antes(int apublicacion);
        void Despues(int apublicacion);
        void Periodo(int inicio, int fin);
};

#endif // BIBLIOTECA_H
