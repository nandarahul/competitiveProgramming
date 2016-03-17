#include<iostream>
#define FOR(i,u,v) for(int i=u;i<v;i++)
using namespace std;

int main()
{
    int T;
    cin>>T;
    FOR(i,0,T)
    {
        int G;
        cin>>G;
        FOR(j,0,G)
        {
            int I,N,Q;
            cin>>I>>N>>Q;
            int numH;
            if(I==1)
            {
                numH=N>>1;
            }
            else
            {
                if(!(N&1))
                numH=N>>1;
                else
                numH=(N>>1) + 1;
            }
            if(Q==1)
            cout<<numH<<"\n";
            else
            cout<<N-numH<<"\n";
        }
    }
}
