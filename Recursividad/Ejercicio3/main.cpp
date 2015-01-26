#include <iostream>

#define v 3
#define h 4

using namespace std;

void imprimir(int a[v][h]);
int suma(int a[v][h], int columna, int fila);

int main()
{


    int a[v][h] = {0};

    for(int i=0; i<v; i++)
    {
        for(int j=0;j<h;j++)
        {
           a[i][j] =1;
        }
     }
     imprimir(a);
     cout<<endl;
     cout<<suma(a,v-1,h-1);

    return 0;
}
void imprimir(int a[v][h])
{
    for(int i=0; i<v; i++)
    {
        for(int j=0;j<h;j++)
        {
           cout<<a[i][j];
        }
        cout<<endl;
     }
}

int suma(int a[v][h], int fila, int columna)
{
    if (fila == 0 && columna == 0) {
        return a[fila][columna];
    }
    else if (columna == 0) {
        return a[fila][columna] + suma(a, fila-1, h-1);
    }
    else {
        return a[fila][columna] + suma(a,fila, columna-1);
    }
}
