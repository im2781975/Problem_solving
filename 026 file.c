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
