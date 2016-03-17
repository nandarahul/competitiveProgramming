#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int T,N,X,sum,min,A;
    scanf("%d",&T);
    for(int c=0;c<T;c++)
    {
        scanf("%d%d",&N,&X);
        scanf("%d",&A);
        min=A;sum=A;
        for(int i=0;i<N-1;i++)
        {
            scanf("%d",&A);
            sum+=A;
            if(A<min)
            min=A;
        }
        int K=sum/X;
        if(sum%X >= min)
        K=-1;
        printf("%d\n",K);
    }
}
