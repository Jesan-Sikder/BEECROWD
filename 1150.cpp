#include <bits/stdc++.h>
using namespace std;
#define ass return 0
#define ll long long
#define dd double
int hi(int a,int &b){

    while (b <= a) {
        
        cin>> b;
    }
    return b;
    }
int main(){
    
   int sum =0,count = 0;

   int a,b,bal;
    cin>>a>>b;

   bal = hi(a,b);
 
  
       

        for (int i = a; i < bal; i++)
        {
            sum+=i;
            count++;
            if(sum>bal){
                break;
            }
        }
        
cout<<count <<endl;



    }


