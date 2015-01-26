#include <iostream>

using namespace std;

int cont(int num);
int main()
{
    int num=0;

    cout << "Mete un numero" << endl;
    cin>> num;

    cout<<cont(num);
    return 0;
}

int cont(int num)
{
    int r = num%10;
    num= num/10;
    if(r == 0)
    {
        return r;
    }
    else
    {
        return r + cont(num);
    }

}
