// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int day1,hour1,min1,sec1;
//     int day2,hour2,min2,sec2;
//     int day;
//     string str,str1;
//     cin>>str>>day1>>hour1>>str1>>min1>>str1>>sec1;
//     cin>>str>>day2>>hour2>>str1>>min2>>str1>>sec2;
//     //int day=(-1*((day1+1)-(day2)));
    

//      int sec=(((60-sec1)+sec2)%60);
//     int min=(((60-sec1)+sec2)%60)+(((60-sec1)+sec2)/60);
   
//     int hour=((23-hour1)+hour2)+(((60-sec1)+sec2)/60);
//     if(min>0 || sec>0 || hour>0){
//     day = (day2 - day1)-1;


//     }
//     else{
//     day = (day2 - day1);
//     }
    
//     cout<<day<<" dia(s)"<<endl;
//     cout<<hour<<" hora(s)"<<endl;
//     cout<<min<<" minuto(s)"<<endl;
//     cout<<sec<<" segundo(s)"<<endl;
// }

//trying new logic
#include<iostream>
using namespace std;
int main(){
    int day1,hour1,min1,sec1;
    int day2,hour2,min2,sec2;
    int day;
    string str,str1;

    


    cin>>str>>day1>>hour1>>str1>>min1>>str1>>sec1;
    cin>>str>>day2>>hour2>>str1>>min2>>str1>>sec2;

    int hour, min, sec;

    int day_x=(day1*24*3600)+(hour1*3600)+(min1*60)+(sec1);
    int day_y=(day2*24*3600)+(hour2*3600)+(min2*60)+(sec2);
    
    int day_z= day_y-day_x;


   day= day_z/(24*3600);

   hour=(day_z%(24*3600))/3600;

   min =  ((day_z%(24*3600))%3600)/60;

   sec = ((day_z%(24*3600))%3600)%60;





    cout<<day<<" dia(s)"<<endl;
    cout<<hour<<" hora(s)"<<endl;
    cout<<min<<" minuto(s)"<<endl;
    cout<<sec<<" segundo(s)"<<endl;

}