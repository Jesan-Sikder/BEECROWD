#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 3;
    int arr[n];
    int jesan[n];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
        jesan[i] = arr[i];
    }
    sort(arr, arr + n);

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << jesan[i] << endl;
    }
}