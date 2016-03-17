#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
		int num,a[10],m,rem,flag;
		for(int i=0;i<10;i++)
		{
				m=-1;
				for(int j=0;j<10;j++)
				{
						flag=0;
						scanf("%d",&num);
						rem=num%42;
						for(int k=0;k<=m;k++)
						{
								if(rem==a[k])
								{
									flag=1;
									break;
								}
						}
						if(!flag)
						a[++m]=rem;
						
				}
				cout<<m+1<<"\n";
		}
}
