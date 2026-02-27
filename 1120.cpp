#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main()
{
    string x, y;
    bool jesan = true;
    while (cin >> x >> y  && y!="0")
    {
       
        vector<string> arr(y.size());

        for (ll i = 0; i < y.size(); i++)
        {
            for (ll j = 0; j < x.size(); j++)

                if (y[i] != x[j])
                {
                    //   cout<<y[i];
                    arr[i] = y[i];
                }

            //    else if(y[i]==x[i] && y[i]!='0' && x[i]!='0'){
            //     // cout<<"1"<<endl;
            //     // break;
            //     jesan == true;
        }











int count =0;



           for (ll i = 0; i < y.size(); i++)
        {
            for (ll j = 0; j < x.size(); j++)

                if (y[i] == x[j])
                {
                    count++;
                   
                   
                }
        }

















        for (ll i = 0; i < y.size(); i++)
        {
            // if(arr[i]=="0"){
            //     cout<<"0";
            //     break;
            // }
            cout << arr[i];
        }


if(count == y.size()){
                        cout<<"0";

        }
cout << endl;

    
    }




     

        

    return 0;
}