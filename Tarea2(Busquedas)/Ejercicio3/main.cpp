#include <iostream>
#include "Ordenamiento.h"
#include "Libro.h"
using namespace std;

int main()
{
    const int n_libros = 4;

    Libro libros[n_libros];

    libros[0]=Libro("Caperusita",2, 50, "Gomita", 1999);
    libros[1]=Libro("Lobo",8, 40, "Santillana", 2000);
    libros[2]=Libro("300",4, 200, "Pearson", 1920);
    libros[3]=Libro("Andres",5, 50, "Ga", 2010);

    int tipo;
    int ordena;
    int forma;

    cout << "Ordenar por:\n 1.Titulo.\n 2.Fecha de Publicacion.\n 3.Edicion.\n";
    cin >> tipo;
    cout << "Tipo de ordenamiento:\n 1.Burbuja.\n 2.Insercion.\n 3.Seleccion.\n";
    cin >> ordena;
    cout << "Tipo de orden:\n 1.Ascendente.\n 2.Descendente.\n ";
    cin >> forma;

switch(ordena)
{
case 1:
    switch(forma)
    {
    case 1:
        if(tipo == 1)
            Ordenamiento<Libro>::ordenar(libros,n_libros, [](Libro a, Libro b){ if (a.getTitulo() > b.getTitulo()) return true; return false;  }, Ordenamiento<Libro>::burbuja);
        if(tipo == 2)
            Ordenamiento<Libro>::ordenar(libros,n_libros, [](Libro a, Libro b){ if (a.getApublicacion() > b.getApublicacion()) return true; return false;  }, Ordenamiento<Libro>::burbuja);
        if(tipo == 3)
            Ordenamiento<Libro>::ordenar(libros,n_libros, [](Libro a, Libro b){ if (a.getEdicion() > b.getEdicion()) return true; return false;  }, Ordenamiento<Libro>::burbuja);
        break;
    case 2:
        if(tipo == 1)
            Ordenamiento<Libro>::ordenar(libros,n_libros, [](Libro a, Libro b){ if (a.getTitulo() < b.getTitulo()) return true; return false;  }, Ordenamiento<Libro>::burbuja);
        if(tipo == 2)
            Ordenamiento<Libro>::ordenar(libros,n_libros, [](Libro a, Libro b){ if (a.getApublicacion() < b.getApublicacion()) return true; return false;  }, Ordenamiento<Libro>::burbuja);
        if(tipo == 3)
            Ordenamiento<Libro>::ordenar(libros,n_libros, [](Libro a, Libro b){ if (a.getEdicion() < b.getEdicion()) return true; return false;  }, Ordenamiento<Libro>::burbuja);
        break;
    default:
        break;
    break;
    }
case 2:
    switch(forma)
    {
    case 1:
        if(tipo == 1)
            Ordenamiento<Libro>::ordenar(libros,n_libros, [](Libro a, Libro b){ if (a.getTitulo() > b.getTitulo()) return true; return false;  }, Ordenamiento<Libro>::insercion);
        if(tipo == 2)
            Ordenamiento<Libro>::ordenar(libros,n_libros, [](Libro a, Libro b){ if (a.getApublicacion() > b.getApublicacion()) return true; return false;  }, Ordenamiento<Libro>::insercion);
        if(tipo == 3)
            Ordenamiento<Libro>::ordenar(libros,n_libros, [](Libro a, Libro b){ if (a.getEdicion() > b.getEdicion()) return true; return false;  }, Ordenamiento<Libro>::insercion);
        break;
    case 2:
        if(tipo == 1)
            Ordenamiento<Libro>::ordenar(libros,n_libros, [](Libro a, Libro b){ if (a.getTitulo() < b.getTitulo()) return true; return false;  }, Ordenamiento<Libro>::insercion);
        if(tipo == 2)
            Ordenamiento<Libro>::ordenar(libros,n_libros, [](Libro a, Libro b){ if (a.getApublicacion() < b.getApublicacion()) return true; return false;  }, Ordenamiento<Libro>::insercion);
        if(tipo == 3)
            Ordenamiento<Libro>::ordenar(libros,n_libros, [](Libro a, Libro b){ if (a.getEdicion() < b.getEdicion()) return true; return false;  }, Ordenamiento<Libro>::insercion);
        break;
    default:
        break;
    break;
    }
case 3:
    switch(forma)
    {
    case 1:
        if(tipo == 1)
            Ordenamiento<Libro>::ordenar(libros,n_libros, [](Libro a, Libro b){ if (a.getTitulo() > b.getTitulo()) return true; return false;  }, Ordenamiento<Libro>::seleccion);
        if(tipo == 2)
            Ordenamiento<Libro>::ordenar(libros,n_libros, [](Libro a, Libro b){ if (a.getApublicacion() > b.getApublicacion()) return true; return false;  }, Ordenamiento<Libro>::seleccion);
        if(tipo == 3)
            Ordenamiento<Libro>::ordenar(libros,n_libros, [](Libro a, Libro b){ if (a.getEdicion() > b.getEdicion()) return true; return false;  }, Ordenamiento<Libro>::seleccion);
        break;
    case 2:
        if(tipo == 1)
            Ordenamiento<Libro>::ordenar(libros,n_libros, [](Libro a, Libro b){ if (a.getTitulo() < b.getTitulo()) return true; return false;  }, Ordenamiento<Libro>::seleccion);
        if(tipo == 2)
            Ordenamiento<Libro>::ordenar(libros,n_libros, [](Libro a, Libro b){ if (a.getApublicacion() < b.getApublicacion()) return true; return false;  }, Ordenamiento<Libro>::seleccion);
        if(tipo == 3)
            Ordenamiento<Libro>::ordenar(libros,n_libros, [](Libro a, Libro b){ if (a.getEdicion() < b.getEdicion()) return true; return false;  }, Ordenamiento<Libro>::seleccion);
        break;
    default:
        break;
    break;
    }
default:
    break;
}

    for(int i = 0; i < n_libros; i++){
        cout << "Titulo: "  << libros[i].getTitulo() <<" Fecha de Publicacion: "  << libros[i].getApublicacion() <<" Edicion: "  << libros[i].getEdicion() << endl;
        cout << endl;
    }

    return 0;
}
