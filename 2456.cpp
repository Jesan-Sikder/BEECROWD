#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int increase=1, decrease=1;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
        
    }

    for (int i = 1; i <= n-1; i++)
    {
        
        if(arr[i]<=arr[i+1]) {
            decrease = 0;
        }
        else if (arr[i]>=arr[i+1]){
            increase = 0;
        }
        

    }
    if(increase) {
        cout<<"C"<<endl;
    }
    else if(decrease) {
        cout<<"D"<<endl;
    }
    else{
         cout<<"N"<<endl;
    }
}