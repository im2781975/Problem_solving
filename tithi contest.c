#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[5],b[5],n,m;
    cin>>t;
    for(int j=1;j<=t;j++)
    {

        for(int i=0;i<3;i++)
        {
            cin>>a[i];
            b[i]= a[i];
        }
        sort(a,a+3);
        cout<<"Data set #"<<j<<":"<<endl;
        cout<<"Orijinal order: ";
        for(int i=0;i<3;i++)
            cout<<b[i]<<" ";
        cout<<endl;
        cout<<"Smallest to Largest: ";
            for(int i=0;i<3;i++)
                cout<<a[i]<<" ";
        cout<<endl;
       cout<<endl;
    }
    return 0;
}
