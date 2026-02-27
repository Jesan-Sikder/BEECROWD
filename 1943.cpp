#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    if (k==1) cout<<"Top 1"<<endl;
    else if(k==2 || k==3 ) cout<<"Top 3"<<endl;
    else if(k==4 || k==5 ) cout<<"Top 5"<<endl;
    else if(k>5 && k<11 ) cout<<"Top 10"<<endl;
    else if(k>10 && k<26 ) cout<<"Top 25"<<endl;
    else if(k>10 && k<26 ) cout<<"Top 25"<<endl;
    else if(k>25 && k<51 ) cout<<"Top 50"<<endl;
    else if(k>50 && k<101 ) cout<<"Top 100"<<endl;
    return 0;
}