#include<bits/stdc++.h>
using namespace std;
#define dd double

int main(){
    
dd a;
cin>>a;
cout<<"NOTAS:"<<endl;
cout<<(int)a/100<<" nota(s) de R$ 100.00"<<endl;
cout<<(((int)a)%100)/50<<" nota(s) de R$ 50.00"<<endl;
cout<<((((int)a)%100)%50)/20<<" nota(s) de R$ 20.00"<<endl;
cout<<(((((int)a)%100)%50)%20)/10<<" nota(s) de R$ 10.00"<<endl;
cout<<((((((int)a)%100)%50)%20)/5)<<" nota(s) de R$ 5.00"<<endl;
cout<<(((((((int)a)%100)%50)%20)%5)/2)<<" nota(s) de R$ 2.00"<<endl;
cout<<"MOEDAS:"<<endl;
cout<<(((((((int)a)%100)%50)%20)%5)%2)/1<<" moeda(s) de R$ 1.00"<<endl;
dd b = ((a*100)/100-((int)(a*100)/100))*100;
// cout<<b<<endl;

cout<<(int)b/50<<" moeda(s) de R$ 0.50"<<endl;
cout<<((int)b%50)/25<<" moeda(s) de R$ 0.25"<<endl;
cout<<(((int)b%50)%25)/10<<" moeda(s) de R$ 0.10"<<endl;
cout<<((((int)b%50)%25)%10)/5<<" moeda(s) de R$ 0.05"<<endl;
cout<<(((((int)b%50)%25)%10)%5)/1<<" moeda(s) de R$ 0.01"<<endl;












}