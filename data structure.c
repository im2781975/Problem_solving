#include<stdio.h>
int main()
{
    int numberofinput,j, arr[100],key, i;
    scanf("%d", & numberofinput);
    for(i=1; i<=numberofinput; i++)
        scanf("%d", &arr[i]);
    for(j=2; j<=numberofinput; j++)
        key=arr[j];
        i=j-1;
        while(i>0 && arr[i]>key)
        {

            arr[i+1]=arr[i];
            i=i-1;
        }
        arr[i+1]=key;
        for(i=1; i<=numberofinput; i++)
        printf("%d", arr[i]);
        return 0;

}
