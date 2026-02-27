#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    for (int i = 0; i <t; i++)
    {
        cin>>arr[i];

    }
    int min = arr[0];
    int minpos = 0;
        for (int i = 1; i < t; i++)

    {
        if(arr[i]<min){
            min=arr[i];
            minpos=i;
        }
    }
    cout<<minpos+1<<endl;
    
}