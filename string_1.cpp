#include<bits/stdc++.h>
using namespace std;
int main()
{

    string  s;
    string h;

    int n, m, p, q;
    cout << "Enter a string: ";
    getline(cin, s);
   //cout << "You entered: " << s << endl;

     cout << "Enter another string: " << " ";
     getline(cin, h);
    //cout << "You entered: " << h << endl;

    cout << "please put index:" << " ";
     cin >> m >> n ;
    int hum = n-m+1;
    string s3 (s, m-1, hum);
     cout << s3  << " ";
     cout << endl;
    cout << "please put index:" << " ";
     cin >> p >> q ;
     int num = q-p+1;
    string h3 (h, p-1, num );
     cout << h3  << endl;
    reverse(s3.begin(), s3.end());
        //cout<<h3 << endl;
    s3.append(h3);
    cout << s3 ;







}
