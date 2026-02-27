#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 12;
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

float sum = 0.0 ;

float count = 0.0;


     for (int i = 0; i < a; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            
           sum+=arr[i][j];
           count++;
        
        }
    }
    if(b =="S"){
       cout<<fixed<<setprecision(1)<<sum<<endl;

    }
    else if( b=="M"){
        cout<<fixed<<setprecision(1)<<(sum/66.0)<<endl;
    }
    
}