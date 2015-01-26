#include <iostream>

using namespace std;

int mcd(int m, int n);

int main()
{
    int m;
    int n;
    cout << "Ingresa el valor de M" << endl;
    cin>> m;
    cout << "Ingresa el valor de N" << endl;
    cin>> n;

    cout<< mcd(m,n);

    return 0;
}

int mcd(int m, int n)
{
    int r = m%n;
    if(r == 0)
    {
        return n;
    }
    else
    {
        return mcd(n, r);
    }
}
