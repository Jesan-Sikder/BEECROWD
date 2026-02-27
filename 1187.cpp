#include <bits/stdc++.h>
#define ll long long
#define dd double
using namespace std;
int main()
{
    int a = 12;
    dd arr[a][a];
    string b;
    cin >> b;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cin >> arr[i][j];
        }
    }

   dd sum =0.0,sum_x=0.0;

    // for (int i = 0; i <a; i++)
    // {
    //     for (int j = 0; j <a; j++)
    //     {
            
    //         sum+= arr[i][j];
            
            
    //       }
        
    // }




 int x=1,y=10,lul=0;


    for (int i = 0; i <=4; i++)
    {
        for (int j = x; j <=y; j++)
        {
            //cout<<arr[i][j];
            sum_x += arr[i][j];
            lul++;
            //cout<<a<<endl;
          }
          x++;
        y--;
        //cout<<endl;
    }



   

    if (b == "S")
    {
        cout << fixed << setprecision(1) << sum_x << endl;
    }
    else if (b == "M")
    {
        cout << fixed << setprecision(1) << (sum_x / 30.0) << endl;
    }








}

