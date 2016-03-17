#include <iostream>
#include<stdio.h>
#include<string>
#include<cstdlib>
using namespace std;

bool checkLeap(int year)
{
     if(!(year%400) || (!(year%4) && (year%100)))
     return true;
     else
     return false;     
}

int main()
{
    string year[12]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
    int daysOfMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int t;
    cin>>t;
    for(int cases=1;cases<=t;cases++)
    {
                 string date;
                 cin>>date;
                 int int_year=atoi(date.substr(7,4).c_str());
                 if(checkLeap(int_year))
                 daysOfMonth[1]=29;
                 else
                 daysOfMonth[1]=28;
                 
                 int day,month,totaldays;
                 day=atoi(date.substr(0,2).c_str());
                 string month1=date.substr(3,3);
                 totaldays=day;
                 for(int i=0;i<12;i++)
                 {
                         if(!year[i].compare(month1))
                         {
                                 month=i;
                                 break;                          
                         }
                         else
                         totaldays+=daysOfMonth[i];
                 }
                 int day2;
                 string month2;
                 if(totaldays<=300)
                 {
                        day2=totaldays;
                        month2="Hundreds";           
                 }
                 else if(totaldays<=360)
                 {
                      day2=totaldays-300;
                      month2="Tens";     
                 }
                 else
                 {
                     day2=totaldays-360;    
                     month2="Ones";
                 }
                 cout<<"Case "<<cases<<": "<<day2<<" "<<month2<<"\n";
                 
    }
    
}
