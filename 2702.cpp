#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main()
{
    int a, b, c;
    int x, y, z;
    cin >> a >> b >> c >> x >> y >> z;

    // if(a-x==0 && b-y==0 && c-z==0)
    //                {
    //                 cout<<"0"<<endl;
    //                }

    //  if((a-b)>0){

    //  }

    vector<int> arr = {a, b, c}, arrr = {x, y, z}, xrr(3);
int sum =0;
    for (int i = 0; i < 3; i++)
    {
        xrr[i] = arr[i] - arrr[i];
if(xrr[i]<0){
    sum+=xrr[i];
}
    }
cout<<abs(sum)<<endl;
    return 0;
}