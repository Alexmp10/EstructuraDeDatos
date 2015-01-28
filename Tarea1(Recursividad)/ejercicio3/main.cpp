#include <iostream>

using namespace std;



int ejer3(int x,int y,int hori,int ver);


int main()
{
    cout << "Tamaño de la matriz (Horizontal)" << endl;
    int hori;
    cin >> hori;
    cout << "Tamaño de la matriz (Vertical)" << endl;
    int ver;
    cin >> ver;
    cout << "Los caminos posibles son: " <<ejer3(0,0,hori,ver);
    return 0;
}

int ejer3(int x,int y,int hori,int ver){
    if((x != hori-1) && (y != ver-1))
    {
        int suma=0;
        if(x < hori-3)
        {
            suma += ejer3(x+3,y,hori,ver);
        }
        if(y < ver-2)
        {
            suma += ejer3(x,y+2,hori,ver);
        }
        return suma;
    }
    else
    {
        return 1;
    }
}
