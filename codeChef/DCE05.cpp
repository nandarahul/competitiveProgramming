#include<iostream>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
            int n;
            scanf("%d",&n);
            int a=2;
            for(;a<=n;a*=2);
            a=a/2;
            printf("%d\n",a);        
    }    
}
