#include<bits/stdc++.h>
using namespace std;
int arr[100][100];

int main()
{
   int row,collum;
   cin>>row>>collum;
   /*
   5 4
   3 4 5 6
   3 2 5 6
   9 8 0 3
   1 7 8 1
   7 8 4 5

   Just Run ans paste is;
   */

   for(int i = 1; i <= row; i++){
        for(int j = 1; j <= collum; j++){
            cin>>arr[i][j];
        }
   }

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= collum; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
   }

cout<<endl;

   vector<int>V[100];
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= collum; j++){
            V[i].push_back(arr[i][j]);
        }
   }

     for(int i = 1; i <= row; i++){
        for(int j = 0; j < collum; j++){
            cout<<V[i][j]<<" ";
        }
        cout<<endl;
   }

}
