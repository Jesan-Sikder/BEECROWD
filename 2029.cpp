#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){

    dd v,d;
    while (cin>>v>>d)
    {
       dd radius=d/2;
       dd area = 3.14*pow(radius,2);
       //area = pi*r^2 fomat e nilam
       dd height = v/area;
       //v =  pi * radius ^ 2 * height
       //arae = pi * radius ^ 2 
       cout<<fixed<<setprecision(2)<<"ALTURA = "<<height<<endl;
       cout<<fixed<<setprecision(2)<<"AREA = "<<area<<endl;
    }
    
    

return 0;
}


