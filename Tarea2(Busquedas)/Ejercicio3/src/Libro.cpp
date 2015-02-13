#include "Libro.h"
//Para obtener el valor de la variable.
string Libro::getTitulo()
{
    return titulo;
}

int Libro::getEdicion()
{
    return edicion;
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

void Libro::setEdicion(int edicion)
{
    this->edicion = edicion;
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
/////////////////////////////////////////////

bool Libro::operator > (Libro& libro){
     if (titulo > libro.titulo)
        return true;
    return false;
}
bool Libro::operator < (Libro& libro){
     if (titulo < libro.titulo)
        return true;
    return false;
}
bool Libro::operator == (Libro& libro){
     if (titulo == libro.titulo)
        return true;
    return false;
}
ostream& Libro::operator << (ostream os){
    os << titulo << endl;
}
