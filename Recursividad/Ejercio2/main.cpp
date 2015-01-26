#include <iostream>

    using namespace std;

    int vec(int a[], int n);

    int main()
    {
        int n = 5;
        int a[n];

        for(int i = 0; i<n; i++)
        {
            a[i]= i+1;
            cout<< a[i] <<" ";
        }

        cout<< "\n" <<vec(a, n-1);

        return 0;
    }

    int vec(int a[], int n)
    {
        if(n == 0)
            return a[0];
        else
            return a[n] + vec(a,n-1);
    }
