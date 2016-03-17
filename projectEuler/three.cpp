#include<iostream>
#include<conio.h>
using namespace std;

bool checkprime(int x)
{
     for(int i=2;i<x/2;i++)
     {
             if(x%i==0)
             return false;        
     }     
     return true;
}

int main()
{
    long long n;
    cin>>n;
    for(long long i=2;i<n/2;i++)
    {
            if(n%i==0)
            {
                      if(checkprime(i))
                      {
                                 cout<<i<<" ";               
                      }
            }  
            
             
    }   
    cout<<"finish!";
    getch(); 
}
