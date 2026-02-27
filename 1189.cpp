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

   dd sum =0.0,sum_x=0.0,sum_y=0.0;

    // for (int i = 0; i <a; i++)
    // {
    //     for (int j = 0; j <a; j++)
    //     {
            
    //         sum+= arr[i][j];
            
            
    //       }
        
    // }




 int x=0,y=0,lul=0;


    for (int i = 1 ;i <=5; i++)
    {
        for (int j = x; j <=y; j++)
        {
            //cout<<arr[i][j];
            sum_x += arr[i][j];
            
           
            //cout<<a<<endl;
          }
         
        y++;
        //cout<<endl;
    }


int xx=0,yy=4;
    for (int i = 6 ;i <=10; i++)
    {
        for (int j = xx; j <=yy; j++)
        {
            //cout<<arr[i][j];
            sum_y += arr[i][j];
            
           
            //cout<<a<<endl;
          }
         
        yy--;
        //cout<<endl;
    }

   
sum = sum_x+sum_y;
    if (b == "S")
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if (b == "M")
    {
        cout << fixed << setprecision(1) << (sum / 30.0) << endl;
    }








}

