#ifndef LIBRO_H
#define LIBRO_H

#include <iostream>
#include <string>

class Libro
{
    private:

        std::string titulo;
        int anio_pub;
        std::string isbn;

    public:
        Libro();
        Libro(std::string, int, std::string);

        friend ostream & operator <<(std::ostream &, Libro&);

};

#endif // LIBRO_H
