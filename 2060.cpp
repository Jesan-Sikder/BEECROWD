#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int two =0, three = 0,four =0,five  =0;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0){
            two++;
        }
        if(arr[i]%3==0){
            three++;
        }
        if(arr[i]%4==0){
            four++;
        }
        if(arr[i]%5==0){
            five++;
        }
    }
   
    cout<<two<<" Multiplo(s) de 2"<<endl;
    cout<<three<<" Multiplo(s) de 3"<<endl;
    cout<<four<<" Multiplo(s) de 4"<<endl;
    cout<<five<<" Multiplo(s) de 5"<<endl;



    
}