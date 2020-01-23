#include<stdio.h>
#include<string.h>
int main()
{
    char text[100];
    int i,len,vowel,consonant;
    printf("Enter the string:");
    gets(text);

    vowel=0;
    consonant=0;
    len=strlen(text);

    for(i=0;i<len;i++)
    {

    if(text[i]=='a' || text[i]=='e' || text[i]=='i' ||text[i]=='o' || text[i]=='u' || text[i]=='A' || text[i]=='E'  || text[i]=='I'  || text[i]=='O'||text[i]=='U')
        {
            vowel++;
        }
    else if(text[i]>='a'&& text[i]>='z'||text[i]>='A'&& text[i]>='Z')
        {
            consonant++;

        }
}
    printf("total number of vowel = %d\n",vowel);
    printf("total number of consonant= %d",consonant);
    return 0;
    }
