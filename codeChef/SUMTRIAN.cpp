#include<iostream>
using namespace std;
//int lines;
int largestSum(int **a,int row,int column,int lines,int b[][100])
{
    if(row==lines-1)
    {
                    b[row][column]=a[row][column];
                    return a[row][column];
                   
    }
    if(b[row][column]==-1) 
    {
           int p,q;
           p=largestSum(a,row+1,column,lines,b);
           q=largestSum(a,row+1,column+1,lines,b);
           if(p>q)    
           {
                      b[row][column]=p+a[row][column];
           }
           else
           {
                      b[row][column]=q+a[row][column];
           }
           return b[row][column];
    }
    return b[row][column];
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
            int lines;            
            scanf("%d",&lines);
            int **a=new int* [lines];
            for(int j=0;j<lines;j++)
            a[j]=new int[100];
            int b[100][100];
            for(int j=0;j<lines;j++)
            {
                    for(int k=0;k<=j;k++)
                    {scanf("%d",&a[j][k]);        
                     b[j][k]=-1;
                    }
            
            }
            printf("%d\n",largestSum(a,0,0,lines,b));
            delete a;        
    }    
}
