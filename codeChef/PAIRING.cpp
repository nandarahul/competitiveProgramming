#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,n,m,a[10000][3],b[1000];
    scanf("%d",&t);
    for(int q=0;q<t;q++)
    {
            scanf("%d%d",&n,&m);
            for(int i=0;i<n;i++)
            b[i]=0;
            for(int i=0;i<m;i++)
            {
                    scanf("%d%d",&a[i][0],&a[i][1]);
                    a[i][2]=1;        
            }
            for(int i=m-1;i>=0;i--)
            {
                    if(b[a[i][0]]==1 || b[a[i][1]]==1)
                    a[i][2]=0;
                    else
                    {
                        b[a[i][0]]=1;b[a[i][1]]=1;    
                    }
            }
            for(int i=0;i<m;i++)
            {
                            if(a[i][2]==1)
                            cout<<i<<" ";                
            }
    }
    return 0;    
}
