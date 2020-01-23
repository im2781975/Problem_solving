#include<stdio.h>
int main()
{
    FILE*f1;
    char c;
    printf("\ndata output\n\n");
    f1=fopen("desktop:\tithipaul.txt","r");
    while((c=getc(f1))!=EOF)
    printf("%c",c);
    fclose(f1);
    return 0;
}
