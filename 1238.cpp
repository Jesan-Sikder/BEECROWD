#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {

        string x;

        getline(cin, x);

        for (int i = 0; i < x.size(); i++)
        {

            if (x[i] == ' ')
            {
                continue;
            }
            cout << x[i];
        }





        cout << endl;
    }










}
