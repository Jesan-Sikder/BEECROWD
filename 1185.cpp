#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 12,ab=10;
    float arr[a][a];
    string b;
    cin >> b;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cin >> arr[i][j];
        }
    }

    float sum = 0.0, sum_x = 0.0, sum_y = 0.0, s = 0.0;

    float count = 0.0;

    //  for (int i = 0; i < a; i++)
    // {
    //     for (int j = 0; j < a; j++)
    //     {
    //          cout<<arr[i][j]<<" ";
            
    //     }
    //     cout<<endl;
    // }





    for (int i = 0; i <=10; i++)
    {
        for (int j = 0; j <=ab; j++)
        {
            //cout<<arr[i][j];
            sum_y += arr[i][j];
            
            //cout<<a<<endl;
          }
        ab--;
        //cout<<endl;
    }





   

    if (b == "S")
    {
        cout << fixed << setprecision(1) << sum_y << endl;
    }
    else if (b == "M")
    {
        cout << fixed << setprecision(1) << (sum_y / 66.0) << endl;
    }








}

