#include<iostream>
#include<stdio.h>
int mod(int x)
{
		if(x>0)
		return x;
		else
		{
			x*=-1;
			return x;
		}
}
int main()
{
		int N,l2,l2mod,W,L=0;
		scanf("%d",&N);
		for(;N>0;N--)
		{
				int S,T;
				scanf("%d%d",&S,&T);
				l2=S-T;
				l2mod=mod(l2);
				if(l2mod>L)
				{
						L=l2mod;
						if(l2>0)
						W=1;
						else
						W=2;
				}
		}
		printf("%d %d\n",W,L);
		return 0;
}
