#include <iostream>

using namespace std;

bool fin=false;
int tamano;
int mat[50][50];

void imprime();
void laberinto(int horizontal,int vertical);

int main()
{
    cout << "Introduce el tamaño del laberinto." << endl;
    cin >> tamano;
    cout << "Introduzca valores 0 para avanzar y 1 para camino bloqueado" << endl;

    for(int i=0;i<tamano;i++)
    {
        for(int j=0;j<tamano;j++)
        {
            cin >> mat[j][i];
        }
    }

    cout<< "Camino: "<<endl;
    laberinto(0,0);



    return 0;
}


void imprime()
{
    for(int i=0;i<tamano;i++)
    {
        for(int j=0;j<tamano;j++)
        {
            cout << mat[j][i];
        }
        cout << endl;
    }
    cout << endl;
}

void laberinto(int horizontal,int vertical){
    if(fin)
    {
        return;
    }

    mat[horizontal][vertical]=2;

    if(((horizontal == tamano-1)&&(vertical == tamano-1)))
    {
        imprime();
        fin = true;
    }
    else
    {
        if((horizontal+1 < tamano) && (mat[horizontal+1][vertical] == 0))// Movimiento hacia derecha
        {
            laberinto(horizontal+1,vertical);
        }

        if((vertical+1 < tamano) && (mat[horizontal][vertical+1] == 0))// Movimiento hacia abajo
        {
            laberinto(horizontal,vertical+1);
        }

        if((horizontal-1 >= 0) && (mat[horizontal-1][vertical]==0))// Movimiento hacia izquierda
        {
            laberinto(horizontal-1,vertical);
        }

        if((vertical-1 >= 0) && (mat[horizontal][vertical-1] == 0))// Movimiento arriba
        {
            laberinto(horizontal,vertical-1);
        }

    }

    mat[horizontal][vertical] = 0;
}
