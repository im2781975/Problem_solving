#include<bits/stdc++.h>
using namespace std;
int main()
{

vector <int> v;
int i, n;
for(i=0; i<6; i++){
    int n;
cin>> n;                                                            //testing Code
v.push_back(n);
}
while(!v.empty())
{
    cout<< v.back() << " ";
    v.pop_back();
}

}
