#include<iostream>
#include<vector>
using namespace std;

int findMin(vector<int> W)
{
    int sz=W.size();
    int min=W[0];
    for(int i=1;i<sz;i++)
    {
        if(W[i]<min)
        min=W[i];
    }
    return min;
}

void findMax(vector<int> W,int &max,int &maxI)
{
    int sz=W.size();
    max=W[0];
    maxI=0;
    for(int i=1;i<sz;i++)
    {
        if(W[i]>max)
        {
            max=W[i];
            maxI=i;
        }
    }
}

int main()
{
    int T,N;
    cin>>T;
    for(;T>0;T--)
    {
        cin>>N;
        vector<int> W(N);
        for(int i=0;i<N;i++)
            cin>>W[i];
        int count=0;
        int max,maxI,min;
        do
        {
            min=findMin(W);
            findMax(W,max,maxI);
            int t=W[maxI];
            W[maxI]=W[W.size()-1];
            W[W.size()-1]=t;
            int dif=max-min;
            count+=dif;
            for(int i=0;i<N-1;i++)
            {
                W[i]+=dif;
            }
        }
        while(max!=min);
        cout<<count<<"\n";
    }
    return 0;
}
