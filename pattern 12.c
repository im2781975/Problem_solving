#include<stdio.h>
int main()
{
    int i, j, N;
    printf("Ener the value of N:");
    scanf("%d", &N);
    for (i=1; i<=N; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=i; j<=N; j++)
        {
            printf("%d", i);

        }
        printf("\n");
        }
        return 0;
        }
