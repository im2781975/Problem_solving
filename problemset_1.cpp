#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int i, j, max, min, temp, n;
       int arr[100];
       cin >> n ;
       for(i=0; i<n; i++)
       cin >> arr[i];

       max= arr[0];
       min= arr[0];
       for(i=0; i<n; i++)
       {

           if(max<arr[i])
             max=arr[i];
       }
       cout <<  "maximum: " ;
       cout <<  max ;
       cout << "\n" ;

        for(i=0; i<n; i++)
       {

           if(min>arr[i])
             min=arr[i];
       }
       cout <<  "minimum: " ;
       cout << min ;
       cout <<  "\n" ;

    for(i=n-1; i>=0; i--){
        printf(" %d", arr[i]);
    }
    }
