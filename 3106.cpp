#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
                               
              int a;
              cin>>a;
              vector<int>arr(a),arrr(a);
              for (int i = 0; i < a; i++)
              {
                cin>>arr[i];
                arrr[i]=3*(arr[i]/3);
              }
              int sum =0;
                for (int i = 0; i < a; i++)
              {
                sum += arrr[i];
               
              }               
                               
                               
                 cout<< sum<<endl;              
                               
                               
                               
                               
                               
                               
                               
                               
return 0;
}