#include<stdio.h>
int main()
{
    int x='A';
    start:
        printf("%c=%d\n", x,x);
        x++;
        goto start;
            return 0;
    }
