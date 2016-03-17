#include<iostream>
using namespace std;
int main()
{
    int c,t,n,a[1000][2];
    int ch,as,cook[1000];
    cin>>c;
    for(int j=0,k;j<c;j++)
    {
           cin>>n;
           for(int i=0;i<n;i++)
           {
                   cin>>a[i][0]>>a[i][1];
                   cook[i]=0;
           }
           k=0;
           for(int i=0;i<n;i++)
           {
               if(a[i][0]<=a[i][1])
               cook[k++]=a[i][0];
               else
               {
                   if(ch>as)
                   as+=a[i][1];
                   else
                   ch+=a[i][1];    
               }            
           } 
           if(ch>=as)t=ch;
           else t=as;
           for(int i=0;i<k;i++)
           {
                   if(t<cook[i])t=cook[i];        
           }
           cout<<t<<"\n";
    }    
}
