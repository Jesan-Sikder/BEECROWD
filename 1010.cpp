#include<bits/stdc++.h>
using namespace std;

int main(){
    int t = 2;
    float a,b,c, result;
    while (t--)
    {
    cin>>a>>b>>c;

        result += (b*c);
    }
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<result<<endl;

}