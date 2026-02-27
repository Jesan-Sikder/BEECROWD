#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
                int t,num;
                cin>>t;
                vector<int>arr(2001,0);

                               
           for (int i = 0; i < t; i++)
           {
            cin>>num;
            arr[num]++;
           }

           for (int i = 1; i <= 2000; i++)
           {
            if(arr[i]>0){
               cout << i << " aparece " << arr[i] << " vez(es)" << endl;
            }
            
           }
           
                               
                            
                               
                               
                               
                               
                               
                               
                               
                               
                               
return 0;
}