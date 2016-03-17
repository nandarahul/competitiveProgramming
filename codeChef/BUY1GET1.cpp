#include<iostream>
using namespace std;

int computeMinCost(string S)
{
    int a[52]={0},n=S.size();
    for(int i=0;i<n;i++)
    {
        if(S[i]>='a')
        {
            a[S[i]-'a']++;
        }
        else
            a[S[i]-'A'+26]++;
    }
    int minCost=0;
    for(int i=0;i<52;i++)
    {
        minCost+=a[i]/2;
        if(a[i] & 1)
            minCost++;
    }
    return minCost;
}

int main()
{
    int T;
    cin>>T;
    string S;
    for(;T>0;T--)
    {
        cin>>S;
        cout<<computeMinCost(S)<<"\n";
    }
	return 0;
}
