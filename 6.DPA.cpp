#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;

    int root = sqrt(N) , Sum = 1;

    for(int i = 2; i <= root ; i++){
        if(N % i == 0){
            int divisor1 = i;
            int divisor2 = N/i;
            if(divisor1 * divisor1 == N)
                Sum += divisor1;
            else
                Sum += divisor1 + divisor2;
        }
    }

    printf("%d\n",Sum);

    if(Sum == N) printf("Perfect\n");
    else if(Sum < N) printf("Deficient\n");
    else printf("Abumdant\n");

}
