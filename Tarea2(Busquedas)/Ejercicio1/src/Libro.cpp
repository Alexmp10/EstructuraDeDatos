#include "Libro.h"

//Para obtener el valor de la variable.
string Libro::getTitulo()
{
    return titulo;
}

string Libro::getAutor()
{
    return autor;
}

int Libro::getPag()
{
    return pag;
}

string Libro::getEditorial()
{
    return editorial;
}

int Libro::getApublicacion()
{
    return apublicacion;
}

//Para asignarle el valor a las variables.
void Libro::setTitulo(string titulo)
{
    this->titulo = titulo;
}

void Libro::setAutor(string autor)
{
    this->autor = autor;
}

void Libro::setPag(int pag)
{
    this->pag = pag;
}

void Libro::setEditorial(string editorial)
{
    this->editorial = editorial;
}

void Libro::setApublicacion(int apublicacion)
{
    this->apublicacion = apublicacion;
}
