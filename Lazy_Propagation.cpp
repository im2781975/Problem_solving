#include<bits/stdc++.h>
using namespace std;
int Arr[100005], Tree[400005] , Lazy[400005];
void init(int node, int S, int E)
{
    if(S == E){
        Tree[node] = Arr[S];
        return;
    }

    int L = 2*node;
    int R = L+1;
    int mid = (S+E)/2;

    init(L, S, mid);
    init(R, mid+1, E);
    Tree[node] = Tree[L] + Tree[R];
}

void update(int node, int S, int E, int i, int value)
{
    if(i>E || i <S)
        return;
    if(S>=i && E<= i){
        Tree[node] = value;
        return;
    }


    int L = 2*node;
    int R = L+1;
    int mid = (S+E)/2;

    update(L, S, mid , i , value);
    update(R, mid+1, E , i , value);
    Tree[node] = Tree[L] + Tree[R];
}
int query(int node, int S, int E, int i, int j)
{
    if(i>E || j < S)
        return 0;
    if(i<=S && j >= E)
        return Tree[node];


    int L = 2*node;
    int R = L+1;
    int mid = (S+E)/2;

    int q1 = query(L, S, mid , i , j);
    int q2 = query(R, mid+1, E , i , j);
    return q1+q2;
}

int main()
{
    int n,q;
    cin>>n>>q;

    init(1,1,n);

    while(q--)
    {
        int l;
        cin>>l;

        if(l == 1){
            int pos, v;
            cin>>pos>>v;
            update(1,1,n,pos,v);
        }
        else{
            int a,b;
            cin>>a>>b;
            cout<<query(1,1,n,a,b)<<endl;
        }
    }
}
