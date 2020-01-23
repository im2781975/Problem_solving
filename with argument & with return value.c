//with argument & with return value//
#include<stdio.h>
#include<conio.h>
int add (int x, int y);
int main ()
{
    int a, b;
    a=10;
    b=5;
    printf("The sum is %d", add(a,b));
    return 0;
    }
    int add(int x, int y)
    {
    int z;
    z= x+y;
    return z;
    }
