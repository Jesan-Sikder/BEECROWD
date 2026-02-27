#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main()
{
    int x, y;
    int a, b;
    bool jesax = true;
    while (cin >> a >> b)
    {

        // int arr[a][b];
        vector<vector<int>> arr(a, vector<int>(b));

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> arr[i][j];
            }
        }
  int x=0, y=0;
        for (int i = 1; i < a-1; i++)
        {
            for (int j = 1; j < b-1; j++)
            
                
                
if ((arr[i][j] == 42&&arr[i][j + 1] == 7 && arr[i][j - 1] == 7 )
&&( arr[i + 1][j] == 7 && arr[i + 1][j + 1] == 7 && arr[i + 1][j - 1] == 7 )&&
( arr[i - 1][j] == 7 && arr[i - 1][j + 1] == 7 && arr[i - 1][j - 1] == 7))
                    {
                        x = i+1, y = j+1;
                        jesax = true;
                     
                    }
                

               
                // cout << arr[i][j] << " ";
            
            // cout << endl;
        }
   
    if (jesax)
    {
        cout << x << " " << y << endl;
    }
    else
    {
        cout << "0" << " " << "0" << endl;
    }
     }
    return 0;
}