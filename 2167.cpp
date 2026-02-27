#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main()
{
    

    ll a;
    cin >> a;
    int  arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
int pos=0 ;
    for (int i = 1; i <a; i++)
    {
         
            
         
            if( arr[i-1]>arr[i]){
                pos = i+1 ;
                break;


            }
       
        
    }
     cout<<pos<<endl;
    
}
