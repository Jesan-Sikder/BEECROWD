// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main(){
//     ll a,b,count=0;
  
//     while (cin>>a>>b ){
//      vector<ll>arr(b);
//     if(a==0 && b ==0)
//     {
//        return 0; 
//     }
//     else {
        
//         for (ll i = 0; i < b; i++)
//         {
//             cin>>arr[i];
            
//         }
//         count =0;

//         sort(arr.begin(),arr.end());
//          for (ll i = 0; i < b; i++)
//         {
//             cout<<arr[i]<<endl;
            
//         }
//          for (ll i = 0; i < b; i++)
//          for (ll j = i+1; j < b; j++)
//          {
            
         
//         {
            
//             if(arr[i]==arr[j]){
                
//                 count++;
//             }
//         }
//         /* code */
//          }
//         cout<<count<<endl;
//     }
    

   
// }}
//after learning frequency count :)
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
                               
                               
                               
                  int a,b;
                  while (cin>>a>>b)
                  {
                    if(a==0  && b == 0){
                        return 0;
                    }
                    vector<int>frequecy(a+1,0);
                    int ticket;

                    for (int i = 0; i < b; i++)
                    {
                       cin>>ticket;
                       frequecy[ticket]++;
                
                    }
                    int count =0;
                    for (int  i = 1; i <= a; i++)
                    {
                        if(frequecy[i]>1){
                            count++;

                        }
                    }
                    cout<<count<<endl;
                    
                  }
                               
                               
                               
                               
                               
                               
                               
                               
                               
                               
return 0;
}