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
