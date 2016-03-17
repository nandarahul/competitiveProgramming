#include <iostream>
#include <stdio.h>
using namespace std;

int mat[100][100],m,n;

int check(int i,int j)
{
		if(i<0||j<0||i>m-1||j>n-1)
		return 0;
		else if(mat[i][j]==-1)
				return 1;
		else
				return 0;
}
int main()
{
		//int m,n;
		for(int count=1;scanf("%d%d",&m,&n)==2 && m!=0 && n!=0;count++)
		{
				char ch;
				for(int i=0;i<m;i++) //Taking the input and initialising the matrix.
				for(int j=0;j<n;j++)
				{
						cin>>ch;
						if(ch=='*')
						mat[i][j]=-1;
						else
						mat[i][j]=0;
				}
				//Finding the Hints and displaying them in the same loop only.
				cout<<"\nField #"<<count<<":\n";
				for(int i=0;i<m;i++)
				{
					for(int j=0;j<n;j++)
					{
						if(mat[i][j]==-1)
						cout<<"*";
						else
						{
								mat[i][j]=check(i-1,j-1)+check(i-1,j)+check(i-1,j+1)+check(i,j+1)+check(i+1,j+1)+check(i+1,j)+check(i+1,j-1)+check(i,j-1);
								cout<<mat[i][j];
						}
					}
				cout<<"\n";
				}
				//cout<<"\n";
		}
}
