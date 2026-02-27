#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 12,ab=11;
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
 

    for (int i = 0; i <a; i++)
    {
        for (int j = 0; j <a; j++)
        {
            
            sum+= arr[i][j];
            
            
          }
        
    }




    // for (int i = 0; i <=10; i++)
    // {
    //     for (int j = 0; j <=ab; j++)
    //     {
    //         //cout<<arr[i][j];
    //         sum_y += arr[i][j];
            
    //         //cout<<a<<endl;
    //       }
    //     ab--;
    //     //cout<<endl;
    // }



    for (int i = 0; i <=11; i++)
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


sum_x= sum-sum_y;
   

    if (b == "S")
    {
        cout << fixed << setprecision(1) << sum_x << endl;
    }
    else if (b == "M")
    {
        cout << fixed << setprecision(1) << (sum_x / 66.0) << endl;
    }








}

