#include<stdio.h>
int main()
{

    int r, i, n;
    while(scanf("%d", &n)!=EOF)
    {

    r=1;
    for(i=1; i<=n; i++)
        r=r*i;
    printf("factorial is %d\n", r);
    }
    return 0;

}
