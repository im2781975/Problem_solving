#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000], i,j , k, n, E[100], O[100];
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    j=0;
    k=0;
    for(i=1; i<=n; i++){
        if(a[i]%2 ==0){
            E[j]=a[i];
            j++;
            }
    }
              for(i=1; i<=n; i++){
                if(a[i]%2 !=0){
                    O[k]=a[i];
                    k++;
                }
              }
              printf("Odd Number : ");
              for(i=0; i<k; i++){
                printf("%d ", O[i]);
              }
              printf("\n");
              printf("Even Number : ");
              for(i=0; i<j; i++){
                printf("%d ", E[i]);
              }


}
