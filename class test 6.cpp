#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, div, mod;
    while(scanf("%d %d", &t, &n)!=EOF)
    {
    div= t/n;
    mod=t%n;
    printf("div=%d mod=%d\n", div, mod);
    }
    return 0;

}
