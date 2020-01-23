#include<stdio.h>
void primenumber( int input)
{
int i;
    for(i=2; i<input; i++)
    {
        if(input%i==0)
            break;
    }
    if(i==input)
        printf("prime\n");
        else
        printf("Not prime\n");
}
int main()
{

    int n, i;
    scanf("%d", &n);
    primenumber(n);
}
