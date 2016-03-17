#include<iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
               int *a=new int[n];
               int *b=new int[n];
               for(int i=0;i<n;i++) 
               {
                       scanf("%d",&a[i]);
                       b[a[i]-1]=i+1;        
               }          
               bool ambiguity=true;
               for(int i=0;i<n;i++)
               {
                       if(a[i]!=b[i])
                       {
                                   ambiguity=false;
                                   break;                
                       }        
               }
               if(ambiguity)
               printf("ambiguous\n");
               else
               printf("not ambiguous\n");
               delete a;
               delete b;
               scanf("%d",&n);
    }
}
