#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,n,z;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
            scanf("%d",&n);
            z=0;
            for(int j=5;j<=n;j*=5)
            {
                    z+=n/j;
            }        
            printf("%d\n",z);
    }    
}
