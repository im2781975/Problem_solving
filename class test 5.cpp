#include<bits/stdc++.h>
using namespace std;
int mian()
{

    int r=1, i, n;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        r=r*i;
    printf("factorial is %d", r);
    return 0;

}
