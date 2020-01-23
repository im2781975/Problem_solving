#include<bits/stdc++.h>
using namespace std;
int finish[10],TAT[10],WAT[10],star[10];
struct node{
    int name;
    int arrive;
    int burst;
}arr[10];
bool cmp(node A, node B)
{
    if( A.arrive == B.arrive)
        return A.name < B.name;
    return A.arrive < B.arrive;
}

void FCFS(int N)
{
    for(int i=0;i<N;i++)
    {
        if(i==0)
            star[i]=arr[i].arrive;
        else
            star[i]=finish[i-1];

        WAT[i]=star[i]-arr[i].arrive;
        finish[i]=star[i]+arr[i].burst;
        TAT[i]=finish[i]-arr[i].arrive;
    }

    double sum=0,sum1=0;
    for(int i = 0 ; i < N ; i++){
        sum += (double)WAT[i];
        sum1 += (double)TAT[i];
    }

    printf("Avg TAT : %f\n",sum1/(double)N);
    printf("Avg WAT : %f\n",sum/(double)N);

}
int main()
{
    int N;
    cin>>N;

    for(int i = 0; i < N; i++){
        arr[i].name = i+1;
        cin>>arr[i].arrive >> arr[i].burst;
    }

    sort(arr,arr+N,cmp);
    FCFS(N);
}

