#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
                               
                               int a,b,c;

                 while(cin>>a>>b>>c)       {
                    if(a==b && b==c && c==a){
                        return 0;
                    }


                    int result = pow((a*b*c),1.0/3);
                    cout<<result<<endl;
                 }       
                               
                               
                               
                               
                               
                               
                               
                               
                               
                               
return 0;
}