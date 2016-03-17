#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int gcd(int a,int b)
{
    if(a>b)
        swap(a,b);
    if(a==0)
        return b;
    return gcd(b%a,a);
}

int main()
{
    int T,N,A[1000];
    cin>>T;
    for(;T>0;T--)
    {
        cin>>N;
        for(int i=0;i<N;i++)
            cin>>A[i];
        if(N==1)
            cout<<A[0]<<"\n";
        else
        {
            int ans=gcd(A[0],A[1]);
            for(int i=2;i<N;i++)
            {
                ans=gcd(ans,A[i]);
            }
            cout<<ans<<"\n";
        }
    }
}
