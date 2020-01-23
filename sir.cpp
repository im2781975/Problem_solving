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
