#include<bits/stdc++.h>
using namespace std;


int main(){
    int t,a,b,pos;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        vector<int >arr(a);
        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
            
        }
        int m_dif = abs(arr[0] - b);
        pos =0;
        for (int i = 0; i < a; i++)
        {
            int dif= abs(arr[i]-b);
           
            if(dif==0){
                pos = i;
                break;

            }
            if (dif < m_dif) {
                m_dif = dif;
                pos = i;
            }
        }
cout<<pos+1<<endl;
        
       

    }
    
}