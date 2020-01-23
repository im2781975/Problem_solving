//With argument & No return value//
#include<stdio.h>
void add (int a, int b);
int main()
{
    int a, b;
    a=10;
    b=5;
    add(a,b);
    return 0;
    }
    void add(int x, int y)
    {
        int z;
        z= x+y;
        printf("%d", z);
        }
