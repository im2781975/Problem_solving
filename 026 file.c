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
