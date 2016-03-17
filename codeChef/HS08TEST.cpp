#include<iostream>
using namespace std;

int main()
{
    float balance;
    int withdrawAmount;
    cin>>withdrawAmount>>balance;
    if((withdrawAmount%5==0) && (withdrawAmount+0.5<=balance))
    {
                             balance-=(withdrawAmount+0.5);                         
    }        
    cout<<balance;
}
