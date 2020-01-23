#include<bits/stdc++.h>
using namespace std;
#include<conio.h>
int main()
{
    int no_of_unit;
    float charge, scharge;
    char name [20];
    cout<<"Enter name and number of units cosumed;\n";
    cin>>name;
    cin>>no_of_unit;
    if(no_of_unit<=100)
        charge=(.60*no_of_unit);
        else if(no_of_unit>100&no_of_unit<=300)
        {
           // charge=(100*.60);
            charge=((no_of_unit)*.80);
        }
        else if(no_of_unit>=300)
        {
            charge=(100*.60);
            charge+=(100*.80);
            charge+=((no_of_unit-300)*.90);
        }
        if(charge<50)
            charge=50;
        if(charge>300){
            scharge=(.05*charge);
        charge+=scharge;
}
cout<<"Electricity bill\n";
cout<<name<<": : rs"<<charge;
getch();
return 0;
}
