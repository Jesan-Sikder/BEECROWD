#include<bits/stdc++.h>
using namespace std;
int main(){
    string a ="a+(b*c)-2-a";
    string b ="(a+b*(2-c)-2+a)*2";
    string x;
    cin>>x;
    if(a == x){
        cout<<"correct"<<endl;


    }
    else if(b==x){
        cout<<"correct"<<endl;

    }
    else{
        cout<<"incorrect"<<endl;
    }

}