#include<iostream>
#include<string>
using namespace std;

int main()
{
	int T,N;
	cin>>T;
	string A,B,C;
	int parents[26],children[26];
	for(;T>0;T--)
	{
	   // string A,B,C;
	   std::fill_n(parents,26,0);
	   std::fill_n(children,26,0);
        cin>>A>>B;
        for(int i=0;i<A.length();i++)
            parents[A[i]-'a']++;
        for(int i=0;i<B.length();i++)
            parents[B[i]-'a']++;
        cin>>N;
        for(;N>0;N--)
        {
            cin>>C;
            for(int i=0;i<C.length();i++)
                children[C[i]-'a']++;
        }
        bool check=true;
        for(int i=0;i<26;i++)
        {
            if(parents[i]<children[i])
            {
                check=false;
                break;
            }
        }
        if(check)
            cout<<"YES\n";
        else
            cout<<"NO\n";
	}
	return 0;
}
