#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
   
               int c =0;

    for (int i = 0; i < a.size(); i++)
    {
        if(a[i]=='1'){
            c++;
        }
    }
    cout<<a;
    if(c%2==0){
        cout<<"0";
    }
    else{
        cout<<"1";
    }
    cout<<endl;
}