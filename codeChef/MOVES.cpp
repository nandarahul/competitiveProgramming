#include<iostream>
using namespace std;

bool convertToBinary(int i,int n,int *bin)
{         
          int sum=0;
          int x=2*n-3;
          while(i!=0)
          {
                  bin[x]=i%2;
                  i/=2;   
                  sum+=bin[x];
                  x--;     
          }
          if(sum==n-1)
          {
                      while(x>=0)
                      {
                                 bin[x--]=0;           
                      }
                      return true;
          }
          return false;
}

bool check(int n,int* bin)
{
     int sum=0;
     for(int i=0;i<(2*n-2);i++)
     {
               sum+=bin[i];      
     }     
     if(sum==n-1)
     return true;
     return false;
}

int noOfTurns(int n,int *bin)
{
    int turns=0;
    for(int i=1;i<(2*n-2);i++)
    {
                turns+=(bin[i]^bin[i-1]);    
    }    
    return turns;
}

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    while(n!=0 && k!=0)
    {
               int *bin=new int[2*n-2];
               int count=0;
               int max=((1<<(2*n-2))-(1<<(n-1)))>>1;
               for(int i=(1<<(n-1))-1;i<=max;i++)
               {
                       //cout<<i<<" ";
                               
                       if(convertToBinary(i,n,bin))
                       {
                                       if(noOfTurns(n,bin)==k)
                                       count+=1;
                                                       
                       }
               } 
               count=count%1000000007;          
               printf("%d\n",count*2);
               //delete bin;
               scanf("%d%d",&n,&k);
               
    }    
}
