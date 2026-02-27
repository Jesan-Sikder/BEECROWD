// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define dd double
// int main()
// {

//     int t;

//     cin >> t;
//     while (t--)
//     {

//         bool positive_1 = false, positive_2 = false;
//         int a_x, a_y, b_x, b_y, c_x, c_y, d_x, d_y, r_x, r_y;
//         cin >> a_x >> a_y >> b_x >> b_y >> c_x >> c_y >> d_x >> d_y >> r_x >> r_y;

//         if (a_x < b_x)
//         {

//             for (int i = a_x; i <= b_x; i++)
//             {
//                 if (r_x == i)
//                 {
//                     positive_1 = true;
//                     break;
//                 }
//                 else{
//                     positive_1 = false;
//                 }

//             }

// if( positive_1==0){
//     cout<<"0"<<endl;
// }

//             else if (positive_1 == 1 && b_y < c_y)
//             {
//                 for (int i = b_y; i <= c_y; i++)
//                 {
//                     if (r_y == i)
//                     {
//                         positive_2 = true;
//                         break;
//                     }
//                 }

//                 if (positive_2)
//                 {
//                     cout << "1" << endl;
//                 }
//                 else
//                 {
//                     cout << "0" << endl;
//                 }

//             }

//            else if (positive_1 == 1 && b_y > c_y)
//             {
//                 for (int i = c_y; i <= b_y; i++)
//                 {
//                     if (r_y == i)
//                     {
//                         positive_2 = true;
//                         break;
//                     }
//                 }

//                 if (positive_2)
//                 {
//                     cout << "1" << endl;
//                 }
//                 else
//                 {
//                     cout << "0" << endl;
//                 }

//             }

//         }

// /************************************************************ */

//        else if (a_x > b_x)
//         {

//             for (int i = b_x; i <= a_x; i++)
//             {
//                 if (r_x == i)
//                 {
//                     positive_1 = true;
//                     break;
//                 }
//                 else{
//                      positive_1 = false;
//                 }

//             }

// if( positive_1==0){
//     cout<<"0"<<endl;
// }

//             else if (positive_1 == 1 && b_y < c_y)
//             {
//                 for (int i = b_y; i <= c_y; i++)
//                 {
//                     if (r_y == i)
//                     {
//                         positive_2 = true;
//                         break;
//                     }
//                 }

//                 if (positive_2)
//                 {
//                     cout << "1" << endl;
//                 }
//                 else
//                 {
//                     cout << "0" << endl;
//                 }

//             }

//            else if (positive_1 == 1 && b_y > c_y)
//             {
//                 for (int i = c_y; i <= b_y; i++)
//                 {
//                     if (r_y == i)
//                     {
//                         positive_2 = true;
//                         break;
//                     }
//                 }

//                 if (positive_2)
//                 {
//                     cout << "1" << endl;
//                 }
//                 else
//                 {
//                     cout << "0" << endl;
//                 }

//             }

//         }

//     }

// }

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
        int a_x, a_y, b_x, b_y, c_x, c_y, d_x, d_y, r_x, r_y;
        cin >> a_x >> a_y >> b_x >> b_y >> c_x >> c_y >> d_x >> d_y >> r_x >> r_y;

        int min_x = min({a_x, b_x, c_x, d_x});
        int max_x = max({a_x, b_x, c_x, d_x});
        int min_y = min({a_y, b_y, c_y, d_y});
        int max_y = max({a_y, b_y, c_y, d_y});

        if (r_x >= min_x && r_x <= max_x && r_y >= min_y && r_y <= max_y)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}
