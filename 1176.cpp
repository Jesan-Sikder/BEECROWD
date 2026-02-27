#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
                               
               ll t,tx=100,x;
                vector<ll>ar(tx);
                            
                ar[0]=0;
                ar[1]=1;
                for (ll i = 2; i < 61; i++)
                {
                    ar[i] = ar[i-1]+ar[i-2];
                   
                }           
                               
                   cin>>t;
                   
                   for (ll i = 0; i < t; i++)
                   {
                    cin>>x;
                    cout<<"Fib("<<x<<") = "<<ar[x]<<endl;
                   }
                   
                               
                               
                               
                               
                               
                               
                               
return 0;
}