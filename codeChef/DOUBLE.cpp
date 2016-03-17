#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int T,N;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
            scanf("%d",&N);
            if(N&1)
            printf("%d\n",N-1);
            else
            printf("%d\n",N);        
    }    
    getch();
}
