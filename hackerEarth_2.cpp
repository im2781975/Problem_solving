#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    vector <int> v;
    v.push_back(5);
    while(v.back()>0)
        v.push_back(v.back()-1);
    for( int i=0; i<v.size(); i++)
        cout << v[i] << " ";
        cout << endl;
    while(!v.empty())
    {
        cout << v.back() << " ";
        v.pop_back();
    }
    cout << endl;
    return 0;
}

