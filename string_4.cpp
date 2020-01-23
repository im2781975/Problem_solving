#include<bits/stdc++.h>
using namespace std;
int main()
{

    //swap a string
    char s[100];
    int i, m, p;
    cout << "Enter a string:" ;
    gets(s);
    p = strlen(s);
    cout << "Reverse String: " ;
    string s3;
    for(i=p-1; i>=0; i--){
    //cout << endl ;
    //char s3 (s[i]);
    s3= s3+s[i];
    }
       cout << s3 ;
}
