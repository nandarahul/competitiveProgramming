#include<stdio.h>
#include<conio.h>
int main()
{
    static int a[100000];
    int T,N,max,maxDiff,diff;
    scanf("%d",&T);
    
    for(int count=0;count<T;count++)
    {
           scanf("%d",&N);
           for(int i=0;i<N;i++)
           scanf("%d",&a[i]);
           
           max=0;maxDiff=0;
           
           for(int i=N-1;i>0;i--)
           {
                   if(a[i]>max)
                   {
                               max=a[i];
                               int min=a[i-1]+1;
                               for(int j=i-1;j>=0;j--)
                               {
                                       if(a[j]<min)
                                       {
                                                   min=a[j];
                                                   diff=a[i]-a[j];
                                                   if(diff>maxDiff)
                                                   maxDiff=diff;                                   
                                       } 
                               }            
                   }
           }
           if(maxDiff>0)
           printf("%d\n",maxDiff);
           else
           printf("UNFIT\n");
    }    
    getch();
}
