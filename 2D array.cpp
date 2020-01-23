#include<bits/stdc++.h>
using namespace std;
int arr[1000];
int Myarr[100][100];

void One_D()
{
     int row, clmn;
    cin>>row; // >>clmn;


    for(int i = 1; i <= row; i++){
        cin>>arr[i];
    }

    for(int i = 2; i <= row ; i++)
    {
        arr[i] = arr[i-1] + arr[i];
    }

    for(int i = 1; i <= row; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // 5
    // 3 4 6 -3 6
    // 3 7 13 10 16

    int query;
    cin>>query;

    while(query--)
    {
        int pos;
        cin>>pos;
        cout<<arr[pos]<<endl;
    }

}

int main()
{

    //One_D();

    int n,m;
    cin>>n>>m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=m ; j++){
            cin>>Myarr[i][j];
        }
    }


       for(int i = 1; i <= n; i++){
        for(int j = 1; j <=m ; j++){
            Myarr[i][j] = Myarr[i][j-1] + Myarr[i][j];
            cout<<Myarr[i][j]<<" ";
        }
        cout<<endl;
    }

    /*int a;
    cin>>a;

    while(a--){
        int x,y;
        cin>>x>>y;
        cout<<Myarr[x][y]<<endl;*/
    //}

}
