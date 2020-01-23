#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    vector <int> Even;
    vector <int> Odd;

    int i, n, p;
    cin>> p;
    for(i=0; i<p; i++){
    int n;
    cin>> n;                                                            //testing Code
    v.push_back(n);
    }
    for(i=0; i<p; i++){
        if(v[i]%2 ==0){
            Even.push_back(v[i]);
            }
    }
    for(i=0; i<p; i++){
                if(v[i]%2 !=0){
                    Odd.push_back(v[i]);
                }
              }
    printf("Odd Number : ");
    for(i=0; i<Odd.size(); i++){
            printf("%d ", Odd[i]);
            }
            printf("\n");
            printf("Even Number : ");
              for(i=0; i< Even.size(); i++){
                    printf("%d ", Even[i]);
              }
    return 0;
}
