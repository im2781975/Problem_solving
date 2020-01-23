#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000], i, n;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
        printf("Odd Number : ");
    for(i=1; i<=n; i++){
        if(a[i]%2!=0)
            printf("%d ", a[i]);
            }
            printf("\n");
            printf("Even Number : ");
              for(i=1; i<=n; i++){
                if(a[i]%2==0)
                    printf("%d ", a[i]);
              }
    return 0;
}
