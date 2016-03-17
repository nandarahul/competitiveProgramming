//May challenge, 2013
#include<iostream>
#include<string>
using namespace std;

bool checkSubsequence(string A,string B)
{
    //check if B is a subsequence of A
    int pos=0;
    bool yo=false;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]==B[pos])
            pos++;
        if(pos==B.length())
        {
            yo=true;
            break;
        }
    }
    return yo;
}
int main()
{
	int T;
    bool check;
    cin>>T;
    string M,W;
	for(;T>0;T--)
	{
	    //string M,W;
        cin>>M>>W;
        int Msize=M.length();
        int Wsize=W.length();
        if(Msize >= Wsize)
            check=checkSubsequence(M,W);
        else
            check=checkSubsequence(W,M);

        if(check)
            cout<<"YES\n";
        else
            cout<<"NO\n";
	}
	return 0;
}
