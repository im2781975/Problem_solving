#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int n, m, N, s,i,j;
    int t;
    scanf("%d", &t);
    while(t--){
    scanf("%lld", &N);
        //n=ceil((sqrt(1+8*N)-1)/2);
        //printf("For fig 1: %lld\n", n);
        n=((sqrt(1+8*N)-1)/2);
        printf("%lld\n", n);


    }
    return 0;

}
