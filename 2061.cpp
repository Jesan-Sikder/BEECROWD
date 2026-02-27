#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,t,count=0,neg=0;
    char w[10];
    cin>>a>>t;
    while (t--)
    {
        cin>>w;
        if (w[0]=='f')
        {
            a++;

        }
        else{
            a--;
        }
        
    }
    // int tab=((a-2)+(count*2))-neg;
    // cout<<tab<<endl;
    cout<<a<<endl;

}
// ---> got some issues