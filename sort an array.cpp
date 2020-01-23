#include<stdio.h>
int main()
{

    int i, j, n, a[100], temp;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=1; i<=n; i++){
        for(j=i+1; j<=n; j++){
            if(a[i]>a[j]){
                temp= a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
   // printf("the order is:");
    //for(i=1; i<=n; i++)
    //{
      //  printf("%d ", a[i]);
    //}
      printf("\n");
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

}
