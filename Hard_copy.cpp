#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int N;
   cin>>N;

   while(N > 0)
   {
       int mod = N % 10;
       cout<<mod<<" ";
       N /= 10;
   }
}
