#include<iostream>
#include<stdio.h>
using namespace std;
int fac(int n)
{
    int a=1;
    for(int i=2;i<=n;i++)
    {
            a=a*i;        
    }    
    return a;
}
int nCk(int n,int k)
{
        return fac(n)/(fac(k)*fac(n-k));
}
int main()
{
    int S[9][6]={{1,2,3,4,53,54},{5,6,7,8,51,52},{9,10,11,12,49,50},{13,14,15,16,47,48},{17,18,19,20,45,46},{21,22,23,24,43,44},{25,26,27,28,41,42},{29,30,31,32,39,40},{33,34,35,36,37,38}};
    char info[54];
    int X,N;
    int ans=0;
    scanf("%d%d",&X,&N);
    for(int c=0;c<N;c++)
    {
            cin>>info;
            for(int i=0;i<9;i++)
            {
                    int count=6;
                    for(int j=0;j<6;j++)
                    {
                               count-=(info[S[i][j]-1]-'0');    
                    }
                    if(count>=X){
                    ans+=nCk(count,X); 
                    //cout<<ans<<" "; 
                    }      
            }  
    }        
    cout<<ans<<"\n";
}
