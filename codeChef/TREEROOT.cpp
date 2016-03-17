//This is indeed a trick problem!
#include<iostream>
using namespace std;
int main()
{
	int T,N,id,sid,x;
	cin>>T;
	for(;T>0;T--)
	{
			cin>>N;
			x=0;
			for(;N>0;N--)
			{
					cin>>id>>sid;
					x+=(id-sid);
			}
			cout<<x<<"\n";
	}
	return 0;
}
