#include <bits/stdc++.h>
using namespace std;
#define your_ass return 0;
int main()
{
    int t, a, i;
    cin >> t>>a;
    int arr[t], sum = 0;
    int min = arr[0];
    for (i = 1; i <= t; i++)
    {
        cin >> arr[i];
        if (arr[i] < min)
        {
            min = arr[i];
        }
        sum+=arr[i];
    }
    cout << "minimum" << endl;
    cout << min << endl;
    cout << "sum" << endl;
    cout << sum +1000<< endl;


    your_ass;
}
