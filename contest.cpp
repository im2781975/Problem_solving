#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a[100],i,j,t, n;
     scanf("%d", &t);
     for(j=0; j<t; j++)
     {
     scanf("%d", &n);
     for(i=0; i<3; i++)
     {
          scanf("%d", &a[i]);

     }
          sort(a,a+3);


     for(i=0; i<3; i++){
          printf("Data set #%d:\n Orginal order:\n smallest to largest: a[i]\n");
     }

}
 return 0;
}
