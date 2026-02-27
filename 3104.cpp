#include <iostream>
#include<math.h>
using namespace std;
int main()
{

    int a, b;
    cin >> a >> b;
    if (a < b)
        cout << sqrt(b) % sqrt(a) << endl;
    else
        cout << a % b << endl;
    return 0;
}