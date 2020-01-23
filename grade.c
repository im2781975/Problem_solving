#include<stdio.h>
int main()
{
int marks, index;
char grade[10];

scanf("%d", &marks);

index=marks/10;
switch(index)
{
case 10:
case 9:
case 8:
        grade ="Honours";
        break;
case 7:
case 6:
        grade ="First Division";
        break;
case 5:
        grade ="Second Division";
        break;
case 4:
        grade ="Third Division";
        break;
default:
        grade ="Fail";
        break;
        }
      printf("%s\n", grade);
      return 0;
}
