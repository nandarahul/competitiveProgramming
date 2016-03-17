#include<iostream>
using namespace std;

int partition(int A[],int left,int right)
{
    int pivot=A[right];
    int storeIndex=left;
    for(int i=left;i<right;i++)
    {
        if(A[i]<=pivot)
            swap(A[i],A[storeIndex++]);
    }
    swap(A[storeIndex],A[right]);
    return storeIndex;
}
//kth smallest element
int qSelect(int A[],int left,int right,int k)
{
    if(left==right)
        return left;
    int p=partition(A,left,right);
    if(p-left+1 == k)
        return p;
    else if(p-left+1 > k)
        return qSelect(A,left,p-1,k);
    else
        return qSelect(A,p+1,right,k-(p-left+1));
}

int main()
{
    int T,N,K;
    cin>>T;
    int A[100];
    for(;T>0;T--)
    {
        cin>>N>>K;
        int totalW=0;
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
            totalW+=A[i];
        }
        int p=qSelect(A,0,N-1,K);
        int lightW=0;
        for(int i=0;i<=p;i++)
            lightW+=A[i];
        cout<<totalW-2*lightW<<"\n";

    }
    return 0;
}
