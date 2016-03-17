#include<iostream>
#define MIN 0
using namespace std;

int findLRmin(int b[],int L,int R)
{
    int min=b[L];
    for(int i=L+1;i<=R;i++)
    {
        if(b[i]<min)
            min=b[i];
    }
    return min;
}

int findLRmax(int b[],int L,int R)
{
    int max=b[L];
    for(int i=L+1;i<=R;i++)
    {
        if(b[i]>max)
            max=b[i];
    }
    return max;
}

int findOUTmax(int b[],int L,int R,int N)
{
    int max=MIN;
    for(int i=0;i<L;i++)
    {
        if(b[i]>max)
            max=b[i];
    }
    for(int i=R+1;i<N;i++)
    {
        if(b[i]>max)
            max=b[i];
    }
    return max;
}

float max(float a,float b)
{
    if(a>b)
        return a;
    return b;
}

int main()
{
	int N,Q,b[100000],L,R;
	cin>>N;
	for(int i=0;i<N;i++)
        scanf("%d",&b[i]);
    cin>>Q;
    int LRmin,LRmax,OUTmax;
    float maxTime;
    for(;Q>0;Q--)
    {
        scanf("%d %d",&L,&R);
        LRmin=findLRmin(b,L,R);
        LRmax=findLRmax(b,L,R);
        if(L>0 || R<N-1)
        {
            OUTmax=findOUTmax(b,L,R,N);
            maxTime=max(OUTmax+LRmin,LRmin+(float)(LRmax-LRmin)/2);
        }
        else
            maxTime=LRmin+(float)(LRmax-LRmin)/2;
        printf("%.1f\n",maxTime);
        //cout<<maxTime<<"\n";
    }
	return 0;
}
