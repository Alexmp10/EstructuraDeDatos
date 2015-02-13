#include "Biblioteca.h"

#include <iostream>
#include "Libro.h"
using namespace std;
Biblioteca::Biblioteca()
{ index = 0;}

void Biblioteca::Add(Libro libro)
{
    if(index < 20)
    {
        libros[index++] = libro;
    }
    else
    {
        cout<<"No tienes espacio para mas libros"<<endl;
    }
}

void Biblioteca::Dele(string titulo)
{
    for(int i=0;i<index;i++)
    {
        if(titulo == libros[i].getTitulo())
        {
            for(int j=i;i<20;i++)
            {
                libros[j]= libros[j+1];
            }
            index--;
        }
    }
}

void Biblioteca::mAutor(string autor)
{
    for(int i=0; i<index;i++)
    {
        if(autor == libros[i].getAutor())
        {
            cout<< libros[i].getTitulo()<<endl;
        }
    }
}

void Biblioteca::mEditorial(string editorial)
{
    for(int i=0; i<index;i++)
    {
        if(editorial == libros[i].getEditorial())
        {
            cout<< libros[i].getTitulo()<<endl;
        }
    }
}

void Biblioteca::Antes(int apublicacion)
{
    for(int i=0; i<index;i++)
    {
        if((apublicacion > libros[i].getApublicacion()) && (libros[i].getApublicacion() > 0))
        {
            cout<< libros[i].getTitulo()<< " " <<libros[i].getApublicacion()<<endl;
        }
    }
}

void Biblioteca::Despues(int apublicacion)
{
    for(int i=0; i<index;i++)
    {
        if(apublicacion < libros[i].getApublicacion())
        {
            cout<< libros[i].getTitulo()<< " " <<libros[i].getApublicacion()<<endl;
        }
    }
}

void Biblioteca::Periodo(int inicio, int fin)
{
    for (int i = 0; i < index; i++)
        {
            if(inicio < libros[i].getApublicacion() && fin > libros[i].getApublicacion())
            {
                cout<< libros[i].getTitulo()<< " " <<libros[i].getApublicacion()<<endl;
            }
        }
}

