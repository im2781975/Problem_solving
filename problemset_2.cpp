#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size, n, i, flag, a[100];
    scanf("%d", &size);
    for(i=0; i<size; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n);
    flag=0;
    for(i=0; i<size; i++)
    {
        if(a[i]==n)
        flag=i+1;
    }
    if(flag>0)
        printf("Number is found at %d", flag);
    else
        printf("Number not found");
}
