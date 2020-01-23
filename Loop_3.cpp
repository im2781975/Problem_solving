#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n;
    cin >> n ;
    for(i=n; i>=1; i--)
    {
        for(j=i; j>=1; j--)
        {
            cout << "* " ;
        }
        cout << "\n";
    }
    for(i=2; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << "* " ;
        }
        cout << "\n";
    }


}


