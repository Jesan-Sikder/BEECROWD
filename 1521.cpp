#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
                               
               int a;
               cin>>a;
                vector<int>arr(a);
                int x;
                for (int i = 1; i <= a; i++)
                {
                   cin>>arr[i];

                }
                   cin>>x;
                   int y;
                   for (int i = x; i <= a; i++)
                   {
                    
                      if(arr[i]==i){
                        
                      }
                      cin>>y;
                   }
                               
                               
                               
                               
                               
                               
                               
                               
                               
                               
                               
                               
return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     while (true) {
//         int N;
//         cin >> N;
//         if (N == 0) break; // end condition

//         vector<int> arr(N + 1); // 1-based indexing
//         for (int i = 1; i <= N; i++) {
//             cin >> arr[i];
//         }

//         int K;
//         cin >> K;

//         // Follow the chain until someone turns themselves in
//         while (arr[K] != K) {
//             K = arr[K];
//         }

//         cout << K << endl;
//     }

//     return 0;
// }
