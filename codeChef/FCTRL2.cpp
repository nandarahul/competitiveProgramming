#include <iostream>
#include <stdio.h>
using namespace std;

void fact(int num)
{
		int m,num1=num,x,temp,i;
		int fact[180];
		for(i=0;num1!=0;i++,num1=num1/10)
			fact[i]=num1%10;
		m=i-1;
		//cout<<m<<" ";
		num--;
		for(;num!=0;num--)
		{
				temp=0;
				for(i=0;i<=m;i++)      //multiplication
				{
						x=(fact[i]*num)+temp;
						fact[i]=x%10;
						temp=x/10;
				}
				for(;temp!=0;i++,temp=temp/10)
				{
						fact[i]=temp%10;
				}
				m=i-1;
		}
		for(;m>=0;m--)
		cout<<fact[m];
		cout<<"\n";
}
int main()
{
	int num;
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d",&num);
		fact(num);
	}
	return 0;
}

