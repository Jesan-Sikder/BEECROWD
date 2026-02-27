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

    float sum = 0.0, sum_x = 0.0, sum_y = 0.0, s = 0.0;

    float count = 0.0;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {

            sum += arr[i][j];
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i == j)
            {

                sum_x += arr[i][j];
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {

            sum_y += arr[i][j];
        }
    }

    s = sum - (sum_x + sum_y);

    if (b == "S")
    {
        cout << fixed << setprecision(1) << s << endl;
    }
    else if (b == "M")
    {
        cout << fixed << setprecision(1) << (s / 66.0) << endl;
    }
}