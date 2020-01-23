#include<bits/stdc++.h>
using namespace std;

int Factorial(int n)
{
    if(n == 0)
        return 1;
    return Factorial(n-1) * n;
}

int main()
{
    int n, Sum = 0 , N;
    cin>>n;
    N = n;
    while(n > 0){
        int riminder = n % 10;
        n /= 10;
        Sum += Factorial(riminder);
    }

    if(Sum == N)
        printf("%d is a Special Number\n",N);
    else
        printf("%d is not a Special Number\n",N);

}
