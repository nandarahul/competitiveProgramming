#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int c,n,a[1000][3],t;
    scanf("%d",&c);
    for(int i=0;i<c;i++)
    {
            t=0;
            scanf("%d",&n);
            for(int j=0;j<n;j++)
            {
                    scanf("%d%d%d",&a[j][0],&a[j][1],&a[j][2]);
                     
            }
            for(int j=0;j<n;j++)
            {
                    if(t<a[j][0])
                    t=a[j][0];
                    
                    else if(t>a[j][0])
                    {
                           while(t>a[j][0])
                           a[j][0]+=a[j][2];
                           
                           t=a[j][0];
                    }        
                    t+=a[j][1];
            }
            printf("%d\n",t);
    }    
}
