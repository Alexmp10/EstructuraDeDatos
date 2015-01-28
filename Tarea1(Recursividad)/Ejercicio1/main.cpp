#include <iostream>

using namespace std;

int imprime(int num);
int ejer1(int fila,int columna,int tam);

int main()
{
    cout << "Inserta el tamaño de la matriz.";
    int numero;
    cin >> numero;
    ejer1(0,0,numero);

    return 0;
}

int ejer1(int fila,int columna,int tam)
{
    if(columna<tam)
    {
        if(fila < columna)
        {
            imprime(fila);
        }
        else
        {
            imprime(columna);
        }

        if(fila < tam-1)
        {
            ejer1(fila+1,columna,tam);
        }
        else
        {
            cout << endl;
            ejer1(0,columna+1,tam);

        }
    }
}

int imprime(int num)
{
    int cont = 1;

    for(int i=0; i<num; i++)
    {
        cont = cont * 2;
    }

    cout << cont << " ";
}

