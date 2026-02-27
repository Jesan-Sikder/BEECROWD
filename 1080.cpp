#include<bits/stdc++.h>
using namespace std;
int main(){
int n=100;
    int arr[n];
   int max,position=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      max=arr[0];
     for(int i=0;i<n;i++){

        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<endl;
  for(int i=0;i<n;i++){
        if(arr[i]==max){
            position=i+1;
        }
    }
cout<<position<<endl;
}
