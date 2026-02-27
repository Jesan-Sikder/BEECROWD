#include<stdio.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

 int main(){
    float x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    float formula1=(x2-x1);
    float formula2=(y2-y1);
    float main_fomula = sqrt(pow((formula1),2)+pow((formula2),2));
    cout<<fixed<<setprecision(4)<<main_fomula<<endl;
 }