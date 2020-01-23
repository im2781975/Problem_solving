#include<bits/stdc++.h>
using namespace std;

int main()
{
    for(int i = 4 ; i <= 20; i+=4){
        for(int j = 1; j <= 20; j++){
            for(int k = 1; k <= 20; k++){
                if(i+j+k == 20 && i/4 + 2*j + 3*k == 20)
                    cout<<i<<" "<<j<<" "<<k<<endl;
            }
        }
    }
}
