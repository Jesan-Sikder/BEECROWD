#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main(){
                               
                               
             string x;
             while (cin>>x)
             {
               
               vector<int>count(10,0);
               //10means  = 0 1 2 3 4 5 6 7 8 9 
               //0 means  = 0 0 0 0 0 0 0 0 0 0
               
               for (int i = 0; i < x.size(); i++)
               {
                char c= x[i];
                int digit  = c-'0';
                count[digit]++;

               }
               int max = 0,jesax;

for (int i = 0; i < 10; i++)
{
    if(count[i]>max){
        max= count[i];
jesax =i;

    }

    else if (count[i] == max   && i > jesax) {
                jesax = i;         
            }
}



cout<<jesax<<endl;
               
             }
                               
                               
                               
                               
                               
                               
                               
                               
                               
                               
                               
return 0;
}
//help from chat gpt will not place ok for that :)