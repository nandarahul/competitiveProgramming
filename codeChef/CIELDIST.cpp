#include<iostream>
using namespace std;
int main()
{
    int T,Ds,Dt,D,sum;
    cin>>T;
    for(;T>0;T--)
    {
        cin>>Ds>>Dt>>D;
        sum=Ds+Dt;
        if(Ds>=Dt+D)
        cout<<Ds-Dt-D<<"\n";
        else if(Dt>Ds+D)
        cout<<Dt-Ds-D<<"\n";
        else if(sum>=D)
        cout<<0<<"\n";
        else
        cout<<D-sum<<"\n";
    }
    return 0;
}
