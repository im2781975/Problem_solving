#include<stdio.h>
int main()
{
int n, count=0;
printf("enter an integer:");
scanf("%d",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("number of digits:%d", count);
}
/***/
#include <stdio.h>
int main ()
{
    char ch;
    printf("Enter the first letter of your name:");
    ch = getchar ();
    printf("the first letter of your name is :%c\n", ch);
    return 0;
}
/***/
