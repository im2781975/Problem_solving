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
#include <stdio.h>
int main ()
{
    int n = 5;
    int i = 1;

    while  (i<= 10) {
        printf ("%d * %d = %d\n", n , i,
n*i);
    i = i + 1;
 }
     return 0;
}
/***/
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
/***/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i,count,n;
    printf("Enter max range:");
    scanf("%d",&n);
    for(num=1;num<=n;num++){

        count=0;

    for (i=2;i<=num/2; i++){
        if(num%i==0){
        count++;
        break;
        }
    }
    if(count==0 && num!=1)
        printf("%d\n",num);
    }
    return 0;
    }
/***/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=2, j, p;
    while(i<=100){

    p=1;
    for(j=2; j<i; j++){
        if(i%j==0){
            p=0;
            }
        }
        if(p){
        printf("%d\n",i);
        }
    i++;
    }
    return 0;
    }
/***/
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
/***/

#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a[100],i,j,t, n;
     scanf("%d", &t);
     for(j=0; j<t; j++)
     {
     scanf("%d", &n);
     for(i=0; i<3; i++)
     {
          scanf("%d", &a[i]);

     }
          sort(a,a+3);


     for(i=0; i<3; i++){
          printf("Data set #%d:\n Orginal order:\n smallest to largest: a[i]\n");
     }

}
 return 0;
}
/***/
#include<stdio.h>
int main()
{
    int i, j, N;
    printf("Ener the value of N:");
    scanf("%d", &N);
    for (i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", (N-i+1));

        }
        printf("\n");
        }
        return 0;
        }
/***/
#include<stdio.h>
int main()
{
    int i, j, N;
    printf("Ener the value of N:");
    scanf("%d", &N);
    for (i=1; i<=N; i++)
    {
        for(j=1; j<=N-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d", j);

        }
        printf("\n");
        }
        return 0;
        }
/***/
#include<stdio.h>
int main()
{
    int i, j, N;
    printf("Ener the value of N:");
    scanf("%d", &N);
    for (i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);

        }
        printf("\n");
        }
        return 0;
        }
/***/
#include<stdio.h>
int main()
{
    int i, j, N;
    printf("Enter the value of N:");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
     for(j=1; j<i; j++){
         printf(" ");
         }
    for (j=1; j<=N-i+1; j++){
        printf("%d",j);
        }
        printf("\n");
        }
        return 0;
        }
/***/
#include<stdio.h>
int main()
{
    int i, j, N;
    printf("Enter the value of N:");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
    for (j=1; j<=N-i+1; j++){
        printf("%d",j);
        }
        printf("\n");
        }
        return 0;
        }
/***/
#include<stdio.h>
int main ()
{
    int i, j, N;
    printf("Enter the value of N:");
    scanf("%d", &N);
    for(i=1; i<=N;i++)
    {
    for(j=i; j<=N-1; j++)
    {
        printf(" ");
        }
        for(j=i; j>=1; j--)
        {
        printf("%d",j);
        }
        printf("\n");
        }
        return 0;
        }
/***/
#include<stdio.h>
int main ()
{
    int i, j, N;
    printf("Enter the value of N:");
    scanf("%d", &N);
    for(i=1; i<=N;i++)
    {
        for(j=i; j>=1; j--)
        {
        printf("%d",j);
        }
        printf("\n");
        }
        return 0;
        }
/***/
#include<stdio.h>
int main()
{
    int i,j, N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(i=N; i>=1; i--)
        {
        for(j=i; j<=N-1; j++){
        printf(" ");
        }

       for (j=i;j>=1; j--)
        {
       printf("%d", j);
       }
       printf("\n");
       }
       return 0;
        }
/***/
#include<stdio.h>
int main()
{
    int i, j, N;
    printf("Enter the value of N:");
    scanf("%d",&N);

    for(i=N; i>=1; i--)
        {
        for(j=N; j>i; j--)
        {
            printf(" ");
            }
        for (j=1; j<=i; j++)
        {
            printf("%d",i);
            }
             printf("\n");
             }
        return 0;
    }
/***/
#include<stdio.h>
int main()
{
    int i, j, N;
    printf("Enter the value of N:");
    scanf("%d",&N);

    for(i=N; i>=1; i--)
        {
        for (j=1; j<=i; j++)
        {
            printf("%d",i);
            }
             printf("\n");
             }
        return 0;
    }
/***/
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
/***/
#include<stdio.h>
int main()
{
    int i, j, N;
    printf("Ener the value of N:");
    scanf("%d", &N);
    for (i=1; i<=N; i++)
    {
        for(j=i; j<=N; j++)
        {
            printf("%d", i);

        }
        printf("\n");
        }
        return 0;
        }
/***/
#include<stdio.h>
int main()
{
    int i, j, N;
    printf("Ener the value of N:");
    scanf("%d", &N);
    for (i=1; i<=N; i++)
    {
        for(j=1; j<=N-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d", (N-i+1));

        }
        printf("\n");
        }
        return 0;
        }
/***/
#include<stdio.h>
int main()
{
    int i,j, N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(i=N; i>=1; i--)
       {
       for (j=i;j>=1; j--){
       printf("%d", j);
       }
       printf("\n");

       }
       return 0;
       }
/***/
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
/***/
#include<stdio.h>
#include<string.h>
int main()
{
int t;
char str[100];
scanf("%d", &t);
getchar();
while(t--)
{
    gets(str);
    printf("%s\n", str);
    return 0;
    }
    }
/***/
void sort(int n, int x[ ]);
   main()
   {
       int i;
       int marks[5] = {40, 90, 73, 81, 35};

       printf("Marks before sorting\n");
       for(i = 0; i < 5; i++)
          printf("%d ", marks[i]);
       printf("\n\n");

       sort (5, marks);
       printf("Marks after sorting\n");
       for(i = 0; i < 5; i++)
          printf("%4d", marks[i]);
       printf("\n");
   }
   void sort(int n, int x[ ])
   {
       int i, j, t;

       for(i = 0; i < n; i++)
          for(j = i+1; j <= n; j++)
             if(x[i] >= x[j])
             {
                t = x[i];
                x[i] = x[j];
                x[j] = t;
             }
   }
/***/
#include<stdio.h>

int findFactorial(int);
int main(){
  int i,factorial,num;

  printf("Enter a number: ");
  scanf("%d",&num);

  factorial = findFactorial(num);
  printf("Factorial of %d is: %d",num,factorial);

  return 0;
}

int findFactorial(int num){
    int i,f=1;

    for(i=1;i<=num;i++)
      f=f*i;

     return f;
}
/***/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n, first=0,second=1,next,c;
    printf("Enter the number of term\n");
    scanf("%d",&n);
    printf("first %d terms of Fibonacci series are:- \n",n);
    for(c=0;c<n;c++)
    {
    if(c<=1)
        next=c;
        else{
        next= first +second;
        first=second;
        second=next;
        }
        printf("%d\n",next);
        }
    return 0;
    }
/***/
#include<stdio.h>
int main(){
  int i,f=1,num;

  printf("Enter a number: ");
  scanf("%d",&num);

  for(i=1;i<=num;i++)
      f=f*i;

  printf("Factorial of %d is: %d",num,f);
  return 0;
}
/***/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000], i, n;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
        printf("Odd Number : ");
    for(i=1; i<=n; i++){
        if(a[i]%2!=0)
            printf("%d ", a[i]);
            }
            printf("\n");
            printf("Even Number : ");
              for(i=1; i<=n; i++){
                if(a[i]%2==0)
                    printf("%d ", a[i]);
              }
    return 0;
}
/***/
