#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
bool fine = true;
    while (cin >> t && t != 0)
    {
        if(!fine){
            cout<<endl;
           
        }
        fine = false;
        vector<string> arr(t);
        vector<ll> arex(t);

        for (int i = 0; i < t; i++)
        {
            cin >> arr[i];
            arex[i] = arr[i].size();
        }

        ll jesan = *max_element(arex.begin(), arex.end());
        // cout << jesan << endl;
        for (int i = 0; i < t; i++)
        {
            if (arr[i].size() == jesan)
            {
                cout << arr[i] << endl;
            }
            else
            {
                int ayehayy = jesan - arr[i].size();
                for (int i = 0; i < ayehayy; i++)
                {
                    cout << " ";
                }
                cout << arr[i] << endl;
            }
        }
   


    }
    


    return 0;
}
