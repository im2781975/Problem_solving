#include<bits/stdc++.h>
using namespace std;
int main()
{

    //string  s;
    char s[100], temp;
    int i, m, p;
    cout << "Enter a string:" ;
    gets(s);
    p = strlen(s);
    m=p-1;
    for(i=0; i<m; i++){
       //for(m=i; m>0 ; m--){
       //while(m--)
      // m--;
       {
            temp=s[i];
            s[i]= s[m];
            s[m]=temp;
            m--;
        }
    }
    cout << endl ;
    cout << "Reverse String: " << s ;


}
