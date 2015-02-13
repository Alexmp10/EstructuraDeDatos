#ifndef LIBRO_H
#define LIBRO_H

#include <iostream>
#include <string.h>
using namespace std;

class Libro
{
    string titulo;
    int edicion;
    int pag;
    string editorial;
    int apublicacion;

    public:
    Libro()
    {
        titulo= "Libro";
        edicion= 0;
        pag = 0;
        editorial = "Editorial";
        apublicacion = 0;
    }

    Libro(string titulo, int edicion, int pag, string editorial, int apublicacion) : titulo(titulo), edicion(edicion), pag(pag), editorial(editorial), apublicacion(apublicacion)
    {

    }


    bool operator > (Libro&);
    bool operator < (Libro&);
    bool operator == (Libro&);
    ostream &operator << (ostream);

    //Para obtener el valor de la variable.
    string getTitulo();
    int getEdicion();
    int getPag();
    string getEditorial();
    int getApublicacion();

    //Para asignarle el valor a las variables.
    void setTitulo(string titulo);
    void setEdicion(int edicion);
    void setPag(int pag);
    void setEditorial(string editorial);
    void setApublicacion(int apublicacion);

};

#endif // LIBRO_H
