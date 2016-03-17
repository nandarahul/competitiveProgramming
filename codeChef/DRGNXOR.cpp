#include<stdio.h>
#include<iostream>
#include<math.h>
int NumberOfOnes(int x)
{
		int count=0;
		while(x!=0)
		{
				count+=x%2;
				x/=2;
		}
		return count;
}
int main()
{
		int T,A,B,N;
		scanf("%d",&T);
		for(;T>0;T--)
		{
				scanf("%d%d%d",&N,&A,&B);
				int Ap=0,Bp=0,count=0;
				count+=NumberOfOnes(A);
				count+=NumberOfOnes(B);
				int N1=N-1;
				int N2=0;
				while(count>0)
				{
						if(N1>=0)
						{
								Ap+=pow(2,N1);
								count--;
								N1--;
						}
						else
						{
								Bp+=pow(2,N2);
								N2++;
								count--;
						}
				}
				int val=Ap^Bp;
				printf("%d\n",val);
		}
}
