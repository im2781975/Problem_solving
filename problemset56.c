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
