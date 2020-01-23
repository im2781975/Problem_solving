#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,N;
    cin>>n;

    N = n;

    int a = n%10;
    n/=10;
    int b = n%10;

    if((a + b) +(a * b) == N)
        printf("%d is a special two digit number\n",N);
    else
        printf("%d is not a special two digit number\n",N);
}
