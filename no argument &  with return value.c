//No argument & with return value//
#include<stdio.h>
int add();
int main()
{
    printf("The sum is %d", add());
    return 0;
    }
    int add()
    {
        int x, y, z;
        x=10;
        y=5;
        z=x+y;
        return z;
    }
