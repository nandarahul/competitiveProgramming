#include<iostream>
#include<string>
#include<vector>
using namespace std;

int findSS(string str)
{
		int p=0;int c=0;
		for(int i=0;i<str.size();i++)
		{
				if(str[i]==' ')
				{
					p=i;
					c++;
					if(c==2)
					break;
				}
		}
		return p;
}
int main()
{
	int T;
	cin>>T;
	string str;
	for(;T>0;T--)
	{
			int N;
			cin>>N;
			int N1=N;
			cin.ignore(100,'\n'); 
			vector<string> v1;
			vector<char> v2;
			for(;N>0;N--)
			{
					getline(cin,str,'\n');
					int pos=findSS(str);
					v1.push_back(str.substr(pos+1,str.size()));
					if(str[0]=='L' || str[0]=='R')
					v2.push_back(str[0]);
			}
			int i=N1-1;int j=N1-2;
			cout<<"Begin on "<<v1[i]<<"\n";
			i--;
			for(;i>=0;i--)
			{
					if(v2[j]=='L')
					cout<<"Right on ";
					else
					cout<<"Left on ";
					cout<<v1[i]<<"\n";
					j--;
			}
	}
	return 0;
}
