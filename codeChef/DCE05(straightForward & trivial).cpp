//TITANIC - find the position of the crew member who would be selected
#include<iostream>
using namespace std;

int sum(int a[],int size)
{
    int SUM=0;
    for(int i=0;i<size;i++)
    SUM+=a[i];
    return SUM;
}

int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
            scanf("%d",&n);
            int *a=new int[n];
            for(int j=0;j<n;j++)
            a[j]=1;
            
            while(sum(a,n)!=1)
            {
                              bool sel=true;
                              for(int j=0;j<n;j++)
                              {
                                      if(a[j]==1){
                                      if(sel)
                                      a[j]=0;
                                      sel=!sel;
                                                  }        
                              }                  
            }        
            for(int j=0;j<n;j++)
            {
                    if(a[j]==1)
                    printf("%d\n",j+1);        
            }
            delete a;
    }
}
