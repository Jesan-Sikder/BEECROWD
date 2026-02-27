#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
                               
                               
              int a,b;
              cin>>a>>b;
              int jesan ;
              vector<int>arr(10001),arrr(10001),x(10001);
              for (int i = 1; i <= 10000; i++)
              {
                arr[i] = i * a;
                arrr[i] = i * b;
                x[i] = abs(arr[i] - arrr[i]);
                if(x[i] >= b){
                    jesan = i;
                    break;
                }
              }
                               
                               
                               
               cout<<jesan<<endl;                
                               
                               
           
                                    
                               
                               
                               
                               
return 0;
}