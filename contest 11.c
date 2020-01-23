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
