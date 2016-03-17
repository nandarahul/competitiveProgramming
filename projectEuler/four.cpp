#include<iostream>
#include<conio.h>
using namespace std;
bool checkPalindrome(int n)
{
     int ncopy=n,count=0;     
     while(ncopy!=0)
     {
            ncopy/=10;
            count++;               
     }
     int *num=new int[count];
     for(int i=0;i<count;i++)
     {
             num[i]=n%10;
             n/=10;        
     }
     for(int i=0,j=count-1;i<j;i++,j--)
     {
             if(num[i]!=num[j])
             return false;        
     }
     return true;
}

int main()
{
    int product,largest=0;;
    for(int i=100;i<=999;i++)
    {
            for(int j=i;j<=999;j++)
            {
                    product=i*j;
                    if(checkPalindrome(product))
                    {
                              if(product>largest)
                              largest=product;
                              cout<<i<<"*"<<j<<"= "<<product<<endl;
                                                         
                    }        
            }        
    }    
    cout<<largest;
    cout<<"\nFINISH!!\n";
    getch();
}
