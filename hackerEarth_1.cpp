#include<bits/stdc++.h>
//#include<iostream>
using namespace std;
//Creating a Generic Function
template <class X>
void Swap (X &a, X &b){

X tp;
tp= a;
a=b;
b=tp;
cout<< "swap elements values of a and b are " << a << " and " << b << " respectively " << endl;
}

int main()
{
int a=10, b=20;
float c=11.5, d=15.5;
Swap(a , b);
Swap(c , d);
return 0;
}
