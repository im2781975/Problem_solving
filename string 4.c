#include<stdio.h>
#include<string.h>
int main()
{
    char line[80];
    scanf("%[^\n]", line);
    printf("%s", line);
    return 0;
    }
