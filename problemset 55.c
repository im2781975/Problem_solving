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
#include <stdio.h>
int main ()
{
    int n= 5;
    int i;
    for (i = 1; i<=10; i = i + 1) {
        printf ("%d* %d = %d\n",n, i,
n*i);
    }
    return 0;
}
/***/
#include  <stdio.h>
int main ()
{
int m,n=5;
int i;

m=0;
for(i=1; i<=10;i=i+1) {
    m=m+n;
    printf ("%d*%d=%d\n",n,i,m);
    }
return 0;
}
/***/
#include <stdio.h>
int main ()
{
    char ch ='W';
    if (ch>= 'a' && ch <= 'z') {
        printf("%c is lower case\n", ch);
    }
    if(ch>='A' && ch <='Z') {
        printf("%c is upper case\n",ch);
    }
    return 0;
}
/***/
