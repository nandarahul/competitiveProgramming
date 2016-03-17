#include<iostream>
#include<stdio.h>
void InsertSort(int a[],int n)
{
     int key,i;
     for(int j=1;j<n;j++)
     {
            key=a[j];
            for(i=j-1;i>=0 && a[i]>key;i--)
            {
                          a[i+1]=a[i];
                          a[i]=key;              
            }         
     }
}
int check(int amt,int index,int a[])
{
	if(amt==0)
	return 1;
	else if(index==-1)
	return 0;
	else
	{
			int var1=check(amt-a[index],index-1,a);
			if(var1==1)
			{
					//printf("%d ",a[index]);
					return 1;
			}
			else
			{
					int var2=check(amt,index-1,a);
					if(var2==1)
					return 1;
			}
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	for(;t>0;t--)
	{
			int m,n;
			scanf("%d%d",&n,&m);
			int a[20],i;
			for(i=0;i<n;i++)
			scanf("%d",&a[i]);
			
			InsertSort(a,n);
			
			for(i=0;i<n&&a[i]<=m;i++);
			int index=i-1;	
			
			if(check(m,index,a)==1)
			printf("Yes\n");
			else
			printf("No\n");
	}
}
