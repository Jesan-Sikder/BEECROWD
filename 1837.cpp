// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define dd double
// int main(){

//            int a,b;
//            cin>>a>>b;
//            int x = a/b;
//            int y = a%b;
//            if(x<0 && y<0){
//             x = x+y;
//             y=abs(x-y);
//            }
//            cout<<x<<" "<<y<<endl;

// return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int q, r;

    for (int i = -1000; i < 1000; i++) {
        for (int j = 0; j < abs(b); j++) { 
            if (a == b * i + j) {
                q = i;
                r = j;
              
            }
        }
    }

    cout << q << " " << r << endl;
    return 0;
}
