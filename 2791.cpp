#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (a==0 && b==0 && c==0 && d==1) cout<<"4"<<endl;
    else if (a==0 && b==0 && c==1 && d==0) cout<<"3"<<endl;
    else if (a==0 && b==1 && c==0 && d==0) cout<<"2"<<endl;
    else if (a==1 && b==0 && c==0 && d==0) cout<<"1"<<endl;
    return 0;
  
}