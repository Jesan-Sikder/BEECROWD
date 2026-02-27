#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a,b,c,d,e;
    cin>>a>>b>>c>>d;
    float media= ((a*2)+(b*3)+(c*4)+(d*1))/10;
    cout<<fixed<<setprecision(1)<<"Media: "<<media<<endl;
    if(media>=7) cout<<"Aluno aprovado."<<endl;
    else if (media<5) cout<<"Aluno reprovado."<<endl;
    else if(media>=5 && media<=6.9){
        cout<<"Aluno em exame."<<endl;
        cin>>e;
        cout<<"Nota do exame: "<<e<<endl;
        float medi = (media+e)/2;
        if(medi>=5) cout<<"Aluno aprovado."<<endl;
        else cout<<"Aluno reprovado."<<endl;
        cout<<fixed<<setprecision(1)<<fixed<<setprecision(1)<<"Media final: "<<medi<<endl;
        }
}