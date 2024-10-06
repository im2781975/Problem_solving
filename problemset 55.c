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
#include<bits/stdc++.h>
using namespace std;

int Min(int x, int y, int z)
{
        return min(min(x,y),z);
}
int editDis(string s1, string s2, int m, int n)
{
        int dp[m+1][n+1];
        for(int i=0; i<=m; i++){
                for(int j=0; i<=n; j++){
                        if(i==0)
                                dp[i][j]=j;
                        else if(j==0)
                                dp[i][j]=i;
                        else
                                dp[i][j]=1 + Min(dp[i][j-1],dp[i-1][j],dp[i-1][j-1]);
                }
        }
        return dp[m][n];
}
int main()
{
        string s1, s2;
        cin >> s1 >> s2;
        cout<< editDis(s1,s2,s1.length(),s2.length())<<endl;
}
/***/
/***/
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
#include<stdio.h>
int main()
{
   int ara[10]={1,2,3,4,5,6,7,8,9,10};
   int temp;
   temp=ara[5];
   ara[5]=ara[7];
   ara[7]=temp;
        printf("%d",ara[7]);
   //int i;
   /*for(i=9;i>=0;i--){
        printf("%d\n",ara[i]);
   }*/


   return 0;
}
/***/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size, n, i, flag, a[100];
    scanf("%d", &size);
    for(i=0; i<size; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n);
    flag=0;
    for(i=0; i<size; i++)
    {
        if(a[i]==n)
        flag=i+1;
    }
    if(flag>0)
        printf("Number is found at %d", flag);
    else
        printf("Number not found");
}
/***/
#include<stdio.h>
int main()
{
    char name[50];
    int a[5], G[5], i;
    float cgpa;

    printf("Enter Student Name:");
    scanf("%s", &name);
    printf("Enter his course marks: ");
        for(i=0; i<5 ;i++)
    scanf("%d", &a[i]);

        for(i=0; i<5; i++)
    if(a[i]>=80 && a[i]<=100)
        G[i]=4;
        else if(a[i]>=70 && a[i]<= 79)
            G[i]= 3.5;
            else if(a[i]>=60 && a[i]<= 69)
                G[i]= 3;
                else if(a[i]>=50 && a[i]<= 59)
                    G[i]= 2.5;
                        else if(a[i]<=49)
                                G[i]= 0;
                                 cgpa= ((( G[0]*3)+(G[1]*1.5)+(G[2]*3)+(G[3]*1.5)+(G[4]*2))/ (3+1.5+3+1.5+2));
                                 printf("cgpa of %s is : %0.2f \n", name , cgpa);

                                 if (cgpa== 0)
                                     printf(" Letter Grade: F");
                                         else if (cgpa<= 2.5)
                                     printf("Letter Grade : D");

                                        else if (cgpa<= 3)
                                     printf(" Letter Grade: C");
                                         else if (cgpa<= 3.5)
                                     printf("Letter Grade : B");

                                        else if (cgpa<= 4)
                                     printf(" Letter Grade : A");
                                     return 0;
                                     }
/***/
int main()
{
    int fib1=0, fib2=1,fib3,num,count;
    printf("Enter the value of num\n");
    scanf("%d", &num);
    printf("First %d Fibonacci numbers are");
    scanf("%d\n",&fib1);
     count=2;
    while(count<num)
    {
        fib3=fib1+fib2;
        count++;
        printf("%d\n",fib3);
        }
    return 0;
    }
/***/
#include<stdio.h>
#include<string.h>
int main()
{
    char input[1000];
    int length, result,sum, ch, i;
    while(scanf("%s", &input)!=EOF)
    {
        sum=0;
        length= strlen(input);
        for(i=0; i<length; i++)
        {
            ch=input[i];
            if(ch>='a' && ch<='z')
            {
                sum=sum+ch-96;
            }
            else
                sum=sum+ch-64+26;
            sum=(result*10+input[i]-48)%5;
            //printf("%d", input[i]-48);
        }
        printf("%d", result);
    }

}
/***/
#include<stdio.h>
int main()
{

    int i, j, n, a[100], temp;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=1; i<=n; i++){
        for(j=i+1; j<=n; j++){
            if(a[i]>a[j]){
                temp= a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
   // printf("the order is:");
    //for(i=1; i<=n; i++)
    //{
      //  printf("%d ", a[i]);
    //}
      printf("\n");
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

}
/***/
#include<stdio.h>
#include<math.h>
#define Max 10
int main()
{
    float x[Max], avrg, var, sd, sum=0, sum1=0;
    int i, n;
    printf ("Enter the value of N\n");
    scanf("%d", &n);
    printf("Enter %d real number\n",n);
    for(i=0; i<n; i++){
        scanf("%f", &x[i]);
        }
     for(i=0; i<n; i++){
         sum=sum+x[i];
         }
         avrg=sum/n;
         for(i=0; i<n; i++){
             sum1= sum1+ pow(x[i]-avrg, 2);
             }
             var=sum1/n;
             sd=sqrt(var);
             printf("standard deviation= %0.2f\n", sd);
             return 0;
             }
/***/
#include <stdio.h>
 int main()
 {
     char ara[100];
     while(NULL != gets(ara)) {
         printf("%s\n", ara);
     }
     return 0;
 }
/***/
#include <stdio.h>
int main()
{
char country[] = "Bangladesh\0";
int i, length;
printf("%s\n", country);
length = 10;
for(i = 0; i < length; i++) {
if(country[i] >= 97 && country[i] <= 122) {
country[i] = 'A' + (country[i] - 'a');
}
}
printf("%s\n", country);
return 0;
}
/***/
#include<stdio.h>
int main()
{
    char country[] = {'B', 'A', 'N', 'G', 'L', 'A', 'D', 'E', 'S', 'H', ' ', 'I', 'S', ' ', 'M', 'Y', ' ', 'C', 'O', 'U', 'N', 'T', 'R', 'Y'};
        printf("%s\n", country);
        return 0;
}
/***/
#include<stdio.h>
#include<string.h>
int main()
{
    char line[80];
    scanf("%[^\n]", line);
    printf("%s", line);
    return 0;
    }
/***/
#include<stdio.h>
int main()
{
    char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h'};
    int i, length;
        printf("%s\n", country);
        length=10;
        for(i=0; i<length; i++) {
            if(country[i]>=97 && country[i]<=122) {
                country[i]= 'A'+ (country[i]- 'a');
                }
        }
        printf("%s\n", country);
        return 0;
}
/***/
#include<stdio.h>
int main()
{
    char country[] = {'B', 'A', 'N', 'G', 'L', 'A', 'D', 'E', 'S', 'H'};
    int i, length;
        printf("%s\n", country);
        length=10;
        for(i=0; i<length; i++) {
            if(country[i]>=65 && country[i]<=90) {
                country[i]= 'a'+ (country[i]- 'A');
                }
        }
        printf("%s\n", country);
        return 0;
}
/***/
#include<stdio.h>
int string_length(char str[])
{
    int i, length=0;

    for(i=0; str[i]!= '\0'; i++){
        length++;
        }
        return length;
        }

int main()
{
    char country[100];
    int length;
    scanf("%s", country);
        length = string_length(country);
        printf("length: %d\n", length);
        return 0;
}

/***/
#include<stdio.h>

int main()
{
  int num1,num2;

  printf("Enter any two numbers\n");
  scanf("%d%d",&num1,&num2);

  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;

  printf("After swapping,the numbers are %d,%d\n",num1,num2);

  return 0;
}
/***/
#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int n, m, N, s,i,j;
    int t;
    scanf("%d", &t);
    while(t--){
    scanf("%lld", &N);
        //n=ceil((sqrt(1+8*N)-1)/2);
        //printf("For fig 1: %lld\n", n);
        n=((sqrt(1+8*N)-1)/2);
        printf("%lld\n", n);


    }
    return 0;

}
/***/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000], i,j , k, n, E[100], O[100];
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    j=0;
    k=0;
    for(i=1; i<=n; i++){
        if(a[i]%2 ==0){
            E[j]=a[i];
            j++;
            }
    }
              for(i=1; i<=n; i++){
                if(a[i]%2 !=0){
                    O[k]=a[i];
                    k++;
                }
              }
              printf("Odd Number : ");
              for(i=0; i<k; i++){
                printf("%d ", O[i]);
              }
              printf("\n");
              printf("Even Number : ");
              for(i=0; i<j; i++){
                printf("%d ", E[i]);
              }


}
/***/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000], i,j , k, n, E[100], O[100];
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    j=0;
    k=0;
    for(i=1; i<=n; i++){
        if(a[i]%2 ==0){
            E[j]=a[i];
            j++;
            }
    }
              for(i=1; i<=n; i++){
                if(a[i]%2 !=0){
                    O[k]=a[i];
                    k++;
                }
              }
              printf("Odd Number : ");
              for(i=0; i<k; i++){
                printf("%d ", O[i]);
              }
              printf("\n");
              printf("Even Number : ");
              for(i=0; i<j; i++){
                printf("%d ", E[i]);
              }


}
/***/
#include<stdio.h>
int main()
{
    int numberofinput,j, arr[100],key, i;
    scanf("%d", & numberofinput);
    for(i=1; i<=numberofinput; i++)
        scanf("%d", &arr[i]);
    for(j=2; j<=numberofinput; j++)
        key=arr[j];
        i=j-1;
        while(i>0 && arr[i]>key)
        {

            arr[i+1]=arr[i];
            i=i-1;
        }
        arr[i+1]=key;
        for(i=1; i<=numberofinput; i++)
        printf("%d", arr[i]);
        return 0;

}
/***/
#include<stdio.h>
int main()
{
        FILE *fp;
        char ch;
        fp = fopen ("open.TXT", "w");
    char name[50];
    int a[5], G[5], i;
    float cgpa;

    printf("Enter Student Name:");
    scanf("%s", &name);
    printf("Enter his course marks: ");
        for(i=0; i<5 ;i++)
    scanf("%d", &a[i]);

        for(i=0; i<5; i++)
    if(a[i]>=80 && a[i]<=100)
        G[i]=4;
        else if(a[i]>=70 && a[i]<= 79)
            G[i]= 3.5;
            else if(a[i]>=60 && a[i]<= 69)
                G[i]= 3;
                else if(a[i]>=50 && a[i]<= 59)
                    G[i]= 2.5;
                        else if(a[i]<=49)
                                G[i]= 0;
                                 cgpa= ((( G[0]*3)+(G[1]*1.5)+(G[2]*3)+(G[3]*1.5)+(G[4]*2))/ (3+1.5+3+1.5+2));
                                 printf("cgpa of %s is : %0.2f \n", name , cgpa);

                                 if (cgpa== 0)
                                     printf(" Letter Grade: F");
                                         else if (cgpa<= 2.5)
                                     printf("Letter Grade : D");

                                        else if (cgpa<= 3)
                                     printf(" Letter Grade: C");
                                         else if (cgpa<= 3.5)
                                     printf("Letter Grade : B");

                                        else if (cgpa<= 4)
                                     printf(" Letter Grade : A");
                                     fprintf(fp, "cgpa of %s is : %0.2f\n\n", name, cgpa);
                                     fclose(fp);
                                     return 0;
                                     }
/***/
#include<stdio.h>
int main()
{
    char name[50];
    int a[5], G[5], i;
    float cgpa;

    printf("Enter Student Name:");
    scanf("%s", &name);
    printf("Enter his course marks: ");
        for(i=0; i<5 ;i++)
    scanf("%d", &a[i]);

        for(i=0; i<5; i++)
    if(a[i]>=80 && a[i]<=100)
        G[i]=4;
        else if(a[i]>=70 && a[i]<= 79)
            G[i]= 3.5;
            else if(a[i]>=60 && a[i]<= 69)
                G[i]= 3;
                else if(a[i]>=50 && a[i]<= 59)
                    G[i]= 2.5;
                        else if(a[i]<=49)
                                G[i]= 0;
                                 cgpa= ((( G[0]*3)+(G[1]*1.5)+(G[2]*3)+(G[3]*1.5)+(G[4]*2))/ (3+1.5+3+1.5+2));
                                 printf("cgpa of %s is : %0.2f \n", name , cgpa);

                                 if (cgpa== 0)
                                     printf(" Letter Grade: F");
                                         else if (cgpa<= 2.5)
                                     printf("Letter Grade : D");

                                        else if (cgpa<= 3)
                                     printf(" Letter Grade: C");
                                         else if (cgpa<= 3.5)
                                     printf("Letter Grade : B");

                                        else if (cgpa<= 4)
                                     printf(" Letter Grade : A");
                                     return 0;
                                     }
/***/
#include<bits/stdc++.h>
using namespace std;
int arr[200005] ;
int main(){
    int n, i, sum=0,q;
    cin>>n>>q;
    for(i=1; i<=n; i++){
    scanf("%d", &arr[i]);
    if(arr[i]!=0) sum++;
    }

while(q--){
   int t,v;
   cin>>t>>v;
   if(t==2){
   arr[v]++;
   if(arr[v] == 1)
      sum++;
  }
  else{
  arr[v]--;
  if(arr[v] == 0)
      sum--;
}
        printf("%d\n",sum);
}
return 0;
}
/***/
#include<stdio.h>
int main()
{
    long long int a, b, c, n;
    scanf("%lld", &n);

    a=0;
    b=1;
    printf("\n");
    while(a<=n){
        printf("%lld\n",a);
        c=a+b;
        a=b;
        b=c;

    }
    printf("\n");
    return 0;
}
/***/
#include<stdio.h>
int main ()
{
    FILE *fp;
    int number, quantity, i;
    float price, value;
    char item[10], filename[10];
    printf("Input file name\n");
    scanf("%s", filename);
    fp= fopen("D:\\filename.doc", "w");
    printf("Input inventory data\n\n");
    printf("Item name Number Price Quantity\n");
    for(i=1; i<=3; i++)
    {
        fscanf(stdin, "%s %d %f %d", item, &number, &price, &quantity);
        fprintf(fp, "%s %d %0.2f %d", item, number, price, quantity);
        }
        fclose(fp);
        fprintf(stdout, "\n\n");
        fp=fopen("D:\\filename.doc", "r");
        printf("Item name Number Price Quantity value\n");
        for(i=1; i<=3; i++)
        {
             fscanf(fp, "%s %d %f %d", item, &number, &price, &quantity);
             value=price*quantity;
             fprintf(stdout, "%-8s %7d %8.2f %8d %11.2f\n", item, number, price, quantity, value);
             }
             fclose(fp);
             return 0;
             }
/***/
#include<stdio.h>
#include<conio.h>
int main()
{
   int n, i, a[100], data, flag=0;
   printf("How many number you want to enter:");
   scanf("%d", &n);
   printf("enter your values:");
   for(i=1; i<=n; i++){
   scanf("%d", &a[i]);
   }
   printf("which data you want to find:");
   scanf("%d", &data);
   for(i=1; i<=n; i++){
       if(a[i]== data){
       flag=flag+1;
       break;
       }
    }
    if(flag>0){
    printf("The data is found & position is : %d", &flag);
    }
    else
    printf("The data is not found");
    return 0;
    }
/***/
#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c;
    printf("Enter the value of equation:");
    scanf("%f %f %f", &a, &b, &c);
    float D, r1, r2;
    D= (b*b-4*a*c);
    if(D>0){
        printf("The roots are real and distinct\n");
        r1=(-b+sqrt(D)/(2*a));
        r2=(-b-sqrt(D)/(2*a));
        printf("the roots are %0.3 %0.3", r1, r2);
        }
    else if (D==0){
        printf("the root is real");
        printf("and it is %f", (-b/(2*a)));
        }
    else
    printf("the roots are imaginary\n");
    return 0;
    }
/***/
#include <stdio.h>
int main()
{
    int number, originalNumber, remainder, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);

    return 0;
}
/***/
#include<stdio.h>
int main()
{
    int ft_marks, st_marks, final_marks;
    float total_marks;
    ft_marks=80;
    st_marks=74;
    final_marks=97;
    total_marks=ft_marks/4.0+st_marks/4.0+final_marks/2.0;
    printf("%f\n",total_marks);
    return 0;
}
/***/
#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<time.h>

const int inf=(1<<28);
struct node{
    int value;
    int index;
    int last;
}tmp , BLOCK[400];
int INDEX[400],arr[100005],Output[100005];

void initialize(int N, int blockSZ ,int blockln)
{
    int tp;
    for(int i = 1; i <= blockSZ ; i++){
        int idx = (i-1)*blockln;
        for(int j = 1 ; j <= blockln; j++){
                for(int k = idx+1 ; k < idx+blockln; k++){
                    if(k >= N) break;
                    if(arr[k] > arr[k+1]){
                        tp = arr[k] ;
                        arr[k] =  arr[k+1];
                        arr[k+1] = tp;
                    }
                }
        }
        BLOCK[i].value = arr[idx+1];
        BLOCK[i].index = idx+1;
        if(idx+blockln <= N)
            BLOCK[i].last = idx+blockln;
        else
            BLOCK[i].last = N;
    }

}

void Sort(int N , int blockSZ , int blockln)
{
    for(int i = 1; i <= blockSZ; i++){
        for(int j = 1; j < blockSZ; j++){
            if(BLOCK[j].value > BLOCK[j+1].value){
                tmp = BLOCK[j];
            BLOCK[j] = BLOCK[j+1];
               BLOCK[j+1] = tmp;
            }
        }
    }
}
int main()
{
        double total_time;
    	clock_t start, end;
    	start = clock();
    	//time count starts
    	srand(time(NULL));



    freopen("set1.txt","r",stdin);
    int N;
    scanf("%d",&N);

    for(int i = 1; i <= N; i++)
        scanf("%d",&arr[i]);

    int blockSZ = sqrt(N);
    int blockln = N/blockSZ;

    if(blockln * blockSZ != N)
        blockln += 1;

    initialize(N , blockSZ , blockln);
    Sort(N , blockSZ , blockln);

    for(int i = 1; i <= N; i++){
        Output[i] = BLOCK[1].value;
        int inx = BLOCK[1].index + 1 , Crnt, pos , R;
        if(inx <= BLOCK[1].last){
            Crnt = arr[inx];
            pos = inx;
            R = BLOCK[1].last;
        }
        else{
            Crnt = inf;
            pos = N + 1;
            R = 0;
        }

        int j = 2;
        while(Crnt > BLOCK[j].value && j <= blockSZ){
            BLOCK[j-1] = BLOCK[j];
            j++;
        }
        BLOCK[j-1].value = Crnt;
        BLOCK[j-1].index = pos;
        BLOCK[j-1].last = R;
    }

    end = clock();
    	//time count stops
    	total_time = ((double) (end - start)) / CLK_TCK;
    	//calulate total time
    	printf("\nTime taken ---> : %f", total_time);
    	return 0;
}
/***/

#include<stdio.h>
#include<string.h>

int main()
{
    char a[107];
    int n,s,j,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        gets(a);
        s=0;
        n=strlen(a);
            for(j=0;j<n;j++)
            {
            if((a[j]== '.')|| (a[j]=='a')||(a[j]=='d')||(a[j]=='g')||(a[j]=='j')||(a[j]=='m')||(a[j]=='p')||(a[j]=='t')||(a[j]=='w')||(a[j]==' '))
            s+=1;
                else if((a[j]== ',') || (a[j]=='b')||(a[j]=='e')||(a[j]=='h')||(a[j]=='k')||(a[j]=='n')||(a[j]=='q')||(a[j]=='u')||(a[j]=='x'))
            s+=2;
                    else if((a[j]== '*')|| (a[j]=='c')||(a[j]=='f')||(a[j]=='i')||(a[j]=='l')||(a[j]=='o')||(a[j]=='r')||(a[j]=='v')||(a[j]=='y'))
            s+=3;
                        else if((a[j]=='s')||(a[j]=='z'))
            s+=4;
        }
        printf("%d\n",s);
    }

    return 0;
}
/***/
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
    {
    char n[1000];
    int num,i,result,j;
    double sum, l;


    while(scanf("%s", n)!=EOF)
    {
        l=strlen(n);
        sum=0;
        for(i=0; i<l; i++){
            sum=sum+pow(n[i]-'0' , l);
        }
        result=0;
        for(j=0; j<l; j++){
            result= result*10+(n[j]-'0');
        }
    if(sum==result)
         printf("Armstrong\n");
    else
         printf("Not Armstrong\n");
    }
    return 0;
}
/***/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d", &n)!=EOF){
    int a, b,row, i;
    row=ceil(((sqrt(1+8*n))-1)/2);

    //cout<<v<<endl;

    int pos=row-1,x,y;
    int last=(pos*(pos+1))/2;

    if(row%2==0)
    {
        x=0;
        y=row+1;
    }
    else
    {
        x=row+1;
        y=0;
    }

    for(int i=last+1; ; i++)
    {
        if(row%2==0)
        {
            x++;
            y--;
        }
        else
        {
            x--;
            y++;
        }
        if(i==n)
        {

            printf("TERM %d IS %d/%d  \n",n,x,y);
            break;
        }
    }
    }

    return 0;

}
/***/


#include<bits/stdc++.h>
using namespace std;
int mian()
{

    int r=1, i, n;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        r=r*i;
    printf("factorial is %d", r);
    return 0;

}
/***/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, div, mod;
    while(scanf("%d %d", &t, &n)!=EOF)
    {
    div= t/n;
    mod=t%n;
    printf("div=%d mod=%d\n", div, mod);
    }
    return 0;

}
/***/
#include <stdio.h>

int main()
{
  int n, array[1000], i, d, temp;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  for (i = 1 ; i <= i - 1; i++) {
    d = i;

    while ( d > 0 && array[d] < array[d-1]) {
      temp= array[d];
      array[d]= array[d-1];
      array[d-1]=temp;
      d--;
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i <= n - 1; i++) {
    printf("%d\n", array[i]);
  }

  return 0;
}
/***/
#include<algorithm>
#include<stdio.h>
using namespace std;
long int a[2000005],i,n;
int main()
{
    while (scanf("%ld",&n)!=EOF)
    {
        if (n==0)
        {
            break;
        }
        for (i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }
        sort(a,a+n);
        for (i=0;i<n;i++)
        {
            printf("%ld",a[i]);
            if (i<(n-1))
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/***/
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n, x, k, total, ans,t,i, rem;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
    scanf("%d %d %d", &n, &x,&k);
    //swap(x, k);
    total=n*(n+1)/2;
    rem= (x*(2*k+(x-1)*1))/2;
    //cout<<rem<<endl;
    ans= total-rem;
    printf("Case %d: %d\n",i, ans);
    }

    return 0;

}
/***/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int i, r, l, sum;
    while(gets(s))
    {

        r=0;
        l=strlen(s);
        if(l==1 && s[0]=='0')
            break;
        for(i=0; i<l; i++)
        {
            sum=r*10+(s[i]- '0');
            r=sum%11;

        }
        if(r==0)
            printf("Y\n");
        else
            printf("N\n");

    }
    return 0;

}
/***/
#include <stdio.h>
int main ()
{
int num1,num2, value;
char sign;
printf("please enter a number:");
scanf("%d", &num1);
printf("please enter another number:");
scanf("%d", &num2);
value = num1+num2;
sign = '+';
printf("%d %c %d = %d\n",num1, sign, num2,value);
value = num1-num2;
sign ='-';
printf("%d %c %d =%d\n",num1, sign, num2, value);
value = num1*num2;
sign = '*';
printf("%d %c %d =%d\n",num1, sign, num2, value);
value =num1/num2;
sign = '/';
printf("%d %c %d = %d\n",num1,sign, num2, value );
return 0;
}
/***/
#include<stdio.h>
#include<string.h>
int main()
{
    char text[100];
    int i,len,vowel,consonant;
    printf("Enter the string:");
    gets(text);

    vowel=0;
    consonant=0;
    len=strlen(text);

    for(i=0;i<len;i++)
    {

    if(text[i]=='a' || text[i]=='e' || text[i]=='i' ||text[i]=='o' || text[i]=='u' || text[i]=='A' || text[i]=='E'  || text[i]=='I'  || text[i]=='O'||text[i]=='U')
        {
            vowel++;
        }
    else if(text[i]>='a'&& text[i]>='z'||text[i]>='A'&& text[i]>='Z')
        {
            consonant++;

        }
}
    printf("total number of vowel = %d\n",vowel);
    printf("total number of consonant= %d",consonant);
    return 0;
    }
/***/
#include<stdio.h>

int main()
{

int n ,c ,p;

scanf("%d",&n);

while(n--)
{
    scanf("%d %d",&c,&p);

    printf("%d %d\n",c,p);

    if(c==1)
     printf("%d\n",p);
     else if(c>1)
     printf("%d\n",(c*p)-(c-1)*2);

}

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
