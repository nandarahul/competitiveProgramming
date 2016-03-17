#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int T,N,S,turns;
    cin>>T;
    for(int c=0;c<T;c++)
    {
        cin>>N;
        turns=0;
        for(int i=1;i<=N;i++)
        {
            cin>>S;
            turns+=S/i;
        }
        if(turns&1)
        cout<<"ALICE\n";
        else
        cout<<"BOB\n";
    }
    return 0;
}
