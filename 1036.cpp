#include<iostream>
#include<math.h>
#include<bits/stdc++.h>

using namespace std;
int main(){
    double a,b,c,d,result1,result2;
    cin>>a>>b>>c;
     d= pow(b,2);
     double jesan= sqrt(d-(4*a*c));
    if(a>0 && jesan >-1){
   
    result1=(-b+sqrt(d-(4*a*c)))/(2*a);
    result2=(-b-sqrt(d-(4*a*c)))/(2*a);

    cout<<fixed<<setprecision(5)<<"R1 = "<<result1<<endl;
    cout<<fixed<<setprecision(5)<<"R2 = "<<result2<<endl;
    }
    else{
        cout<<"Impossivel calcular"<<endl;
    }

}