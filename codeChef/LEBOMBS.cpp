#include<stdio.h>
#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
    int T;
    char a[1001];
    scanf("%d",&T);
    for(int c=0;c<T;c++)
    {
            int N;
            scanf("%d",&N);
            cin>>a;
            int count =0;
            if(N==1 && a[0]=='0')
            count++;
            
            if(a[0]=='0' && a[1]=='0')
                         count++;
            if(a[N-2]=='0' && a[N-1]=='0')
                           count++;
            for(int i=1;i<N-1;i++)
            {
                   if(a[i]=='0' && a[i-1]=='0' && a[i+1]=='0')
                                count++;
            } 
            cout<<count<<"\n";       
    }    
    //getch();
}
