#include "Libro.h"

Libro::Libro()
{
    //ctor
}

Libro::Libro(std::string t, int ap, std::string i): titulo(t), anio_pub(ap), isbn(i)
{


}
    std::ostream & operator <<(std::ostream &, Libro&)
    {

        os << libro.titulo <<std::endl;
    }
