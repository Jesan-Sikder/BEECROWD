#include<bits/stdc++.h>
using namespace std;
int main(){
    float input,salary;
    int per;
    
    cin>>input;
    
    if(input>=0.00 && input<=400.00){
        per = 15;
        salary = input+((input*per*1)/100);
    }
    else if(input>=400.1 && input<=800.00){
        per = 12;
        salary = input+((input*per*1)/100);
    }
    else if(input>=800.01 && input<=1200.00){
        per = 10;
        salary = input+((input*per*1)/100);
    }
    else if(input>=1200.01 && input<=2000.00){
        per = 7;
        salary = input+((input*per*1)/100);
    }
    else if(input>2000.00){
        per = 4;
        salary = input+((input*per*1)/100);
    }
    

    cout<<"Novo salario: "<<fixed<<setprecision(2)<<salary<<endl;
    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<((input*per*1)/100)<<endl;
    cout<<"Em percentual: "<<per<<" %"<<endl;


return 0;
}