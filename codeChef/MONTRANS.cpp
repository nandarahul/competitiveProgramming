#include<iostream>
#include<stdio.h>
//#include<conio.h>
using namespace std;
int main()
{
    int a,b,c,t,maxDollar,maxCent;
    cin>>t;
    for(int i=0;i<t;i++)
    {
           scanf("%d%d%d",&a,&b,&c);
            int j=0,count=0;;
            maxDollar=a;maxCent=b;
            while((a!=0 ||c<b) && j<=10000)
            {
                  if(c>b)
                  {
                         if(a>0)
                         a--;
                         else break;
                         b+=100;       
                  }      
                  b-=c;
                  int temp=a;
                  a=b;
                  b=temp;
                  j++;
                  
                  if(maxDollar<a)
                  {
                                 count=j;
                                 maxDollar=a;
                                 maxCent=b;
                  }
                  else if(maxDollar==a && maxCent<b)
                  {
                       maxCent=b;
                       count=j;     
                  }
                  
            }        
            printf("%d\n",count);
    }
  //  getch();
}
