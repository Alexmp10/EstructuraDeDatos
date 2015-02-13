#include <iostream>

#include "Libro.h"
#include "Biblioteca.h"
using namespace std;

int main()
{
    Biblioteca ositolector;
    //Titulo,Autor,Pagina,Editorial,Año de publicacion
    Libro l1("Caperusita","Alejandro", 50, "Gomita", 1999);
    Libro l2("Lobo","Alejandro", 40, "Santillana", 2000);
    Libro l3("300","Televisa", 200, "Pearson", 1920);
    Libro l4("Caperusita","Alejandro", 50, "Gomita", 2010);

    ositolector.Add(l1);
    ositolector.Add(l2);
    ositolector.Add(l3);
    ositolector.Add(l4);

    cout<<"Libros por autor"<<endl;
    ositolector.mAutor("Alejandro");

    cout<<endl <<"libros por editorial"<<endl;
    ositolector.mEditorial("Gomita");

    cout<<endl <<"Libros antes de.."<<endl;
    ositolector.Antes(2000);

    cout<<endl <<"Libros despues de.."<<endl;
    ositolector.Despues(1999);

    cout<<endl <<"Libros durante.."<<endl;
    ositolector.Periodo(1910,2002);


    return 0;
}
