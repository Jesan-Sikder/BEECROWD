#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
    int t;
   while( cin>>t){
    bool a;
    if(t==0){
        return 0;
    }
// if(t==1){
//    cin>>t;
//    cout<<t<<endl;
//    return 0;
// }
    vector<int>arr(t);

    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < t; i++)
    {
        if(arr[i]==t){
            a= true;

        }
    }
    if(a){
        vector<pair<int,int>>p(t); 
        for (int i = 0; i <t; i++)
        {
            p[i].first = arr[i];
            p[i].second = i;
        }
                              
         sort(p.begin(),p.end(),greater<pair<int,int>>());
        //  for (int i = 0; i < t; i++)
        //  {
        //     cout<<p[i].first<<"goes to " <<p[i].second <<endl;
        //  }
        int capture;
                             
            for (int i = 0; i < t; i++)
         {
            if(i==1){
                capture=p[i].second;
                break;

            }
         }
                                
                cout<<capture+1<<endl;               
                               
                               
        }
        else{
            return 0;
        }                 
                               
                               
                               
    }                          
                               
                               
return 0;
}