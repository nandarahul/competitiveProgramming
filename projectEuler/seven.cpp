#include<iostream>
#include<conio.h>
using namespace std;

bool checkprime(int x)
{
     for(int i=2;i<=x/2;i++)
     {
             if(x%i==0)
             return false;        
     }     
     return true;
}

int main()
{
    int count=0;
    for(int i=2;;i++)
    {
            if(checkprime(i))
            {                count++;
                             printf("\n%d",i);
                            // cout<<i<<endl;
            }
            if(count==10001)
            {
                            
                            break;                
            }        
    }    
    getch();
}
