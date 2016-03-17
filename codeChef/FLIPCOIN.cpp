#include<iostream>
#include<stdio.h>
//#include<conio.h>
using namespace std;

int main()
{
    int coins[100000]={0};
    int N,Q;
    int A,B,state,count;
    scanf("%d%d",&N,&Q);
    for(int i=0;i<Q;i++)
    {
            
            scanf("%d%d%d",&state,&A,&B);
            if(state==0)
            {
                        for(int j=A;j<=B;j++)
                        coins[j]=(coins[j]+1)%2;            
            }
            else 
            {
                count=0;
                for(int j=A;j<=B;j++)
                count+=coins[j];
                printf("%d\n",count);    
            }
    }
        
  //  getch();
}
