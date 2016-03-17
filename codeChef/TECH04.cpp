#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
		int t,m,flag,j;
		char a[41];
		//scanf("%d",&t);
		cin>>t;
		for(int i=0;i<t;i++)
		{
				//scanf("%s",a);
				//cin>>a;
				cin>>a;
				flag=1;
				for(j=0;a[j]!=' ';j++);
				m=j;
				cout<<m;
				for(j=0;j<m;j++)
				{
						for(int k=m+1;a[k]!='\0';k++)
						{
								if(a[j]==a[k])
								{
										a[k]='*';
										break;
								}
						}
				}
				for(int j=m+1;a[j]!='\0';j++)
				{
						if(a[j]!='*')
						{
								printf("NO\n");
								flag=0;
								break;
						}
				}
				if(flag)
				printf("YES\n");
		}
		return 0;
}
