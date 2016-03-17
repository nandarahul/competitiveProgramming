#include <iostream>
#include <stdio.h>
using namespace std;
/*bool check(int i,int j)
{
		if(i>0 && i<1000000 && j>0 && j<1000000)
		return true;
		else
		return false;
}*/
void swap(int &i,int &j)
{
		int temp=i;
		i=j;
		j=temp;
}
int main()
{
	int i,j;
	while(scanf("%d%d",&i,&j)==2)// && check(i,j))
	{
		int I=i,J=j;
		if(i>j)
		swap(i,j);
		int maxLength=0;
		for(int k=i;k<=j;k++)
		{
				int kOne=k;
				int clength=1;
				while(kOne!=1)
				{
						if(kOne&1)
						//kOne=3*kOne+1;
						kOne=(kOne<<1|1)+kOne;
						else
						kOne=kOne>>1;
						clength++;
				} 
				if(clength>maxLength)
				maxLength=clength;
		}	
		printf("%d %d %d\n",I,J,maxLength);
	}	
}
