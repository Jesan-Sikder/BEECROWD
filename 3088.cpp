#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main()
{

    string x;

    while (getline(cin, x))
    {

        for (int i = 0; i < x.size(); i++)
        {
            
            if (x[i] == ' ' && (x[i + 1] == ',' || x[i + 1] == '.'))
            {
                continue;
            }
            cout << x[i];
        }
        cout << endl;
    }

    return 0;
}
