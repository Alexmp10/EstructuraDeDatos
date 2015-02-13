#ifndef LIBRO_H
#define LIBRO_H
#include <iostream>
#include <string.h>
using namespace std;

class Libro
{
    string titulo;
    string autor;
    int pag;
    string editorial;
    int apublicacion;

    public:
    Libro()
    {
        titulo= "Libro";
        autor= "Autor";
        pag = 0;
        editorial = "Editorial";
        apublicacion = 0;
    }

    Libro(string titulo, string autor, int pag, string editorial, int apublicacion) : titulo(titulo), autor(autor), pag(pag), editorial(editorial), apublicacion(apublicacion)
    {

    }
    //Para obtener el valor de la variable.
    string getTitulo();
    string getAutor();
    int getPag();
    string getEditorial();
    int getApublicacion();

    //Para asignarle el valor a las variables.
    void setTitulo(string titulo);
    void setAutor(string autor);
    void setPag(int pag);
    void setEditorial(string editorial);
    void setApublicacion(int apublicacion);

};


#endif // LIBRO_H
