#include<stdio.h>
int main()
{
    int i, j, N;
    printf("Enter the value of N:");
    scanf("%d",&N);

    for(i=N; i>=1; i--)
        {
        for(j=N; j>i; j--)
        {
            printf(" ");
            }
        for (j=1; j<=i; j++)
        {
            printf("%d",i);
            }
             printf("\n");
             }
        return 0;
    }
