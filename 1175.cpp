#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
                               
        int a=20;
        vector<int >arr(a);                       
        for (int i = 0; i < 20; i++)
        {
           cin>>arr[i];
        }
        
         for (int i = 19; i >=  0; i--)
        {
           cout<<"N["<<abs(i-19)<<"] = "<<arr[i]<<endl;
        }
    
                               
                               
                               
                               
                               
                               
         //1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20                      
                               
                               
                               
return 0;
}