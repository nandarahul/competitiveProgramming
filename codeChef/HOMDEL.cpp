#include<stdio.h>
#include<iostream>
#include<conio.h>
#define MAX 100001
using namespace std;
int T[250][250],SD[250][250],N;

bool isPresent(int *a[2],int num,int j)
{
     for(int i=0;i<num;i++)    
     {
             if(a[0][i]==j)
             return true;        
     } 
     return false;
}
int minTime(int S,int D)
{
    int *a[2];
    a[0]=new int[N];a[1]=new int[N];
    int num=0;
    int minDist=0,minElem=S,dist;
    
    while(true){
    
     if(minElem==D)
     return minDist;
     else
     {
         a[0][num]=minElem;
         a[1][num]=minDist;
         num++;    
     }
    minDist=MAX;     
    for(int i=0;i<num;i++)
    {
            for(int j=0;j<N;j++)
            {
                    dist=T[a[0][i]][j]+a[1][i];
                    if(a[0][i]!=j && dist<minDist && !isPresent(a,num,j))
                    {
                                  minElem=j;minDist=dist;                                               
                    }        
            }        
    }    
}
}
int main()
{
    scanf("%d",&N);
    for(int i=0;i<N;i++)
            for(int j=0;j<N;j++)
            cin>>T[i][j];
    
    for(int i=0;i<N;i++)
            for(int j=0;j<N;j++)
            SD[i][j]=minTime(i,j);
            
    for(int i=0;i<N;i++)
            {
                        for(int j=0;j<N;j++)
                        cout<<SD[i][j]<<" ";
            
            cout<<"\n";}
            
            
    int M,S,G,D;
    scanf("%d",&M);
    int timeT,timeD,timeS;
    for(int i=0;i<M;i++)
    {
            timeS=0;
            scanf("%d%d%d",&S,&G,&D);
            timeT=SD[S][G]+SD[G][D];
            timeD=SD[S][D];
            if(timeD<timeT)
            timeS=timeT-timeD;
            cout<<timeT<<" "<<timeS<<"\n";
    }
    //getch();        
}
