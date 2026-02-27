#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll a,b,sum=0;
    cin>>a>>b;
    for (ll i = a; i <=b; i++)
    {
        sum+=i;
    }
    cout<<sum<<endl;
    
}