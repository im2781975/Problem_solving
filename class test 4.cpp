#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d", &n)!=EOF){
    int a, b,row, i;
    row=ceil(((sqrt(1+8*n))-1)/2);

    //cout<<v<<endl;

    int pos=row-1,x,y;
    int last=(pos*(pos+1))/2;

    if(row%2==0)
    {
        x=0;
        y=row+1;
    }
    else
    {
        x=row+1;
        y=0;
    }

    for(int i=last+1; ; i++)
    {
        if(row%2==0)
        {
            x++;
            y--;
        }
        else
        {
            x--;
            y++;
        }
        if(i==n)
        {

            printf("TERM %d IS %d/%d  \n",n,x,y);
            break;
        }
    }
    }

    return 0;

}
