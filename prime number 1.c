#include<stdio.h>
#include<conio.h>
int main()
{
    int n, c;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(c=2; c<=n-1; c++)
    {
        if(n%c==0)
        {
        printf("%d is not prime\n",n);
        break;
        }
            }
            if(c==n)
                printf("%d is prime\n",n);
                return 0;
                   }
