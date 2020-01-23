#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n, x, k, total, ans,t,i, rem;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
    scanf("%d %d %d", &n, &x,&k);
    //swap(x, k);
    total=n*(n+1)/2;
    rem= (x*(2*k+(x-1)*1))/2;
    //cout<<rem<<endl;
    ans= total-rem;
    printf("Case %d: %d\n",i, ans);
    }

    return 0;

}

