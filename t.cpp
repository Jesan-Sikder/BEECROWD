#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
    string x,y;
bool jesan = true;
            while (cin>>x>>y)
            {
              vector<string>arr(y.size());
              for (ll i = 0; i < y.size(); i++)
              {for (ll j = 0; j < x.size(); j++)
              
               if(y[i]!=x[j]){
                //   cout<<y[i];
                  arr[i]=y[i];

               }
               
               else if(y[i]==x[i] && y[i]!='0' && x[i]!='0'){
                cout<<"1"<<endl;

               }
               
              }
             









              for (ll i = 0; i < y.size(); i++){
                cout<<y[i];
              }
              cout<<endl;
            }
                              
                               
                               
                               
                               
                               
                               
                               
                               
                               
                               
                               
return 0;
}