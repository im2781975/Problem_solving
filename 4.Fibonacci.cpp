#include<bits/stdc++.h>
using namespace std;
int arr[50];
int main()
{
    int n;
    cin>>n;

    for(int i = 0 ; i < n; i++){

        if(i == 0)
            arr[i] = 0;
        else if(i == 1)
            arr[i] = 1;
        else
            arr[i] = arr[i-1] + arr[i-2];

        printf("%d ",arr[i]);
    }
}
