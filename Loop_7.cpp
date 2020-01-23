#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, n;
    cin >> n ;
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            cout << "*" ;
        }
        cout << "\n";
    }                                     //hoi na

     for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            cout << " " ;
        }
        for(k=1; k<=i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

