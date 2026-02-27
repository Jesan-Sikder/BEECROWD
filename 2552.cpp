#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
                               
             int a,b;
             while(cin>>a>>b){
           
            int arr[a][b];
             for (int i = 0; i < a; i++)
             {
                for (int j = 0; j < b; j++)
                {
                    cin>>arr[i][j];
                }
                
             }
                               
             for (int i = 0; i < a; i++)
             {
                for (int j = 0; j < b; j++)
                {
                    if(arr[i][j]==1){
                        arr[i][j]=9;
                    }
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
             }                  
                               
                               
                               
            }                  
                               
                               
                               
                               
                               
                               
return 0;
}