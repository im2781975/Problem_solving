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
