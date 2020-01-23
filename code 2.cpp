#include<iostream>
#include<math.h>
using namespace std;

int reverse1(int n)
{
    int a,rim=0;

    while(n!=0)
    {
        a = n%10;
        rim = rim*10 + a;
        n = n/10;

    }
    return rim;
}


int main()
{
    int a;
    int n;
    cin>>n;
    int m = n;
    cout<<"Reverse output without return type is =";
    while(n!=0)
    {
        a=n%10;
        cout<<a;
        n=n/10;
    }
    cout<<endl<<"Reverse output with return type is ="<<reverse1(m)<<endl;
    return 0;
}

