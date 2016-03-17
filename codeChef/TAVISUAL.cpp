#include<iostream>
using namespace std;

int main()
{
	int T,N,Q,C,L,R;
	cin>>T;
	for(;T>0;T--)
	{
        cin>>N>>C>>Q;
        for(;Q>0;Q--)
        {
            cin>>L>>R;
            if(C<=R && C>=L)
            {
                C=R-(C-L);
            }
        }
        cout<<C<<"\n";
	}
	return 0;
}
