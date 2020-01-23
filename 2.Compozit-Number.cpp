#include<bits/stdc++.h>
using namespace std;
int Compo[200005];

int main()
{
    int Number, k = 0;
    cin>>Number;

    for(int j = 2; j <= Number; j++){
        int root = sqrt(j) , flag = 0;
        for(int i = 2; i <= root; i++){
            if(j%i == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            Compo[k] = j;
            k++;
        }
    }

    for(int i = 0 ; i < k; i++)
        printf("%d ",Compo[i]);
    printf("\n");
}


1
