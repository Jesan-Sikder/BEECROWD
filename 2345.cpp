#include<bits/stdc++.h>
using namespace std;
int main(){
  int a= 4;
  vector<int>arr(a);
  for (int i = 0; i < a; i++)
  {
    cin>>arr[i];

  }
  int x,y;
sort(arr.begin(), arr.end());
for (int i = 0; i < a; i++)
  {
   x = arr[0]+arr[a-1];
   y=arr[1]+arr[2];

  }
  cout<<abs(x-y)<<endl;
  
}