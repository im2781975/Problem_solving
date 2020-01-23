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
