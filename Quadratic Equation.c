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
