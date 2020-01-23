#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector <int> v;
    int n,i;
    // loop 6 pojonto ghurbe & protibar je man ta nibo ta vector e push korbo.
    for(i=0; i< 6; i++){
        scanf("%d", &n);
        v.push_back(n);
    }
     printf("Odd Number : ");
    for(i=0; i<v.size(); i++){
            if(v[i]%2!=0)
            printf("%d ", v[i]);
            }
            printf("\n");
            printf("Even Number : ");
              for(i=0; i< v.size(); i++){
                if(v[i]%2==0)
                    printf("%d ", v[i]);
              }
    return 0;
}

