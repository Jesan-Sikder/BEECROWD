#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
                               
               string a;
               cin>>a;
               int x;
               bool jesax= true;
               for (size_t i = 0; i < a.size(); i++)
               {
                if(a[i]==' '){
                    x= i+1;
                    if(a[0]!=a[x]){
                        jesax = false;
                        break;


                    }
                }
               }
               if(jesax){
                cout<<"Y"<<endl;
               }
               else{
                cout<<"N"<<endl;
               }
                               
                               
                               
                               
                               
                               
                               
                               
                               
                               
                               
                               
return 0;
}
