#include <iostream>
#include<stdio.h>
int main(int argc, char** argv)
{
	int a[100000],t,z=0;
	scanf("%d",&t);
	
	for(int i=0;i<t;i++)
	scanf("%d",&a[i]);
	
	for(int i=0;i<t;i++)
	{
			for(int j=i+1;j<t;j++)
			{
					if(a[j]<a[i])
					z++;
			}
	}
	printf("%d",z);
	return 0;
}
