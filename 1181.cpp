#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main()
{

    int x=12, y;
    cin >>y;
    float arr[x][x];
    char a;
    cin>>a;
      float sum = 0.0;
    

 
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> arr[i][j];
        }
    }





    // for (int i = 0; i < x; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }




   // cout << "new one :" << endl;



  

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (i == y)
            {
                // cout<<arr[i][j]<<" ";
                sum += arr[i][j];
            }
        }
        
    }
if(a =='S'){

   cout <<fixed<<setprecision(1)<< sum << endl;
}

else if(a =='M'){
    cout<<fixed<<setprecision(1)<<sum/(x)<<endl;
}
    return 0;
}