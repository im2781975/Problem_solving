#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
    {
    char n[1000];
    int num,i,result,j;
    double sum, l;


    while(scanf("%s", n)!=EOF)
    {
        l=strlen(n);
        sum=0;
        for(i=0; i<l; i++){
            sum=sum+pow(n[i]-'0' , l);
        }
        result=0;
        for(j=0; j<l; j++){
            result= result*10+(n[j]-'0');
        }
    if(sum==result)
         printf("Armstrong\n");
    else
         printf("Not Armstrong\n");
    }
    return 0;
}
