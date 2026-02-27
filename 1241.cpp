#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        bool sax ;
        string x, y;
        cin >> x >> y;
        int a = x.size();
        int b = y.size();
        bool jesan;



        if (a > b || a==b)
        {
           

            reverse(x.begin(), x.end());
            reverse(y.begin(), y.end());
            
                for (int i = 0; i < b; i++)
                {
                    if (x[i] != y[i])
                    {
                        sax = false;
                        break;
                    }
                    else{
                        sax = true;
                    }
                }
             

            if (sax == true)
            {
                cout << "encaixa" << endl;
            }

            else
            {
                cout << "nao encaixa" << endl;
            }
        }

        else
        {
            cout << "nao encaixa" << endl;
        }
    }








}
