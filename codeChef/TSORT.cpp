#include<iostream>
//#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
    int t,number,maximum=0;
    static int A[1000001]={0};
    scanf("%d",&t);
    
    for(int i=0;i<t;i++)
    {
            scanf("%d",&number);
            if(number>maximum)
            maximum=number;
            A[number]++;
    }
    
    for(int i=0;i<=maximum;i++)
    {
            for(int k=1;k<=A[i];k++)        
            printf("%d\n",i);
    }
    
    
  //  getch();        
}
