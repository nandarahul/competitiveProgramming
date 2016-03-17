#include<iostream>
#include<stdio.h>
//#include<conio.h>
using namespace std;
void swap(char &a,char &b)
{
     char temp=a;
     a=b;
     b=temp;     
}

int QuickSort(char *A,int startIndex,int endIndex)
{
     if(startIndex>=endIndex)
     {
           return 0;                                 
     }
     else
     {
     int pivotIndex,pivotValue,storeIndex=startIndex-1;
     //pivotIndex=rand()%endIndex;
     //swap(A[pivotIndex],A[endIndex]);
     pivotIndex=endIndex;//We can choose any other pivot element as well by removing the above comment! ;)
     pivotValue=A[pivotIndex];//Ultimately we are placing the pivot elemnt at the end only..bcoz what matters 
                         //is the choice of pivot element ie the choice of pivotValue (more precisely)
     
     for(int k=startIndex;k<endIndex;k++)
     {
          if(A[k]<=pivotValue)
          {
                 storeIndex++;
                 swap(A[storeIndex],A[k]);                    
          }   
     }    
     storeIndex++; 
     swap(A[storeIndex],A[pivotIndex]);
     
     QuickSort(A,startIndex,storeIndex-1);
     QuickSort(A,storeIndex+1,endIndex);
     
        
     }
}

int main()
{
    char str1[21],str2[21],n1,n2;
    int t,i;
    cin>>t;
    for(int l=0;l<t;l++)
    {
            cin.clear(); //clear the error bits for the cin input stream
            cin.sync();
            cin.getline(str1,21);
            cin.getline(str2,21);
            
            for(i=0;str1[i]!='\0';i++);
            n1=i;
            for(i=0;str2[i]!='\0';i++);
            n2=i;
            if(n1!=n2)
            {
                                  cout<<"NO\n";
                                  continue;
            }
            QuickSort(str1,0,n1-1);
            QuickSort(str2,0,n2-1);
            if(strcmp(str1,str2)==0)
            cout<<"YES\n";
            else cout<<"NO\n";
    }
//getch();
}
