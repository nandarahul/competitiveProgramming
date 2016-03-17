#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	for(;T>0;T--)
	{
		int N,var,max;
		cin>>N;
		if(N==1)
		{
				cin>>var;
				cout<<"YES\n";
		}
		else if(N==2)
		{
				cin>>var>>var;
				cout<<"YES\n";
		}
		else
		{
			int cur;
			bool flag=true;
			cin>>max>>cur;
			N-=2;
			for(;N>0;N--)
			{
				cin>>var;
				if(var<max)
				{
						flag=false;
				}
				else if(max<cur)
				{
					max=cur;
				}
				cur=var;
			}
			if(flag)
			cout<<"YES\n";
			else
			cout<<"NO\n";
		}
	}
	return 0;
}
