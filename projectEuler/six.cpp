#include<iostream>
#include<conio.h>
using namespace std;
int squareOfSum(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    sum+=i;
    sum*=sum;
    return sum;    
}
int sumOfSquare(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
            sum+=i*i;        
    }    
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int ans=squareOfSum(n)-sumOfSquare(n);
    cout<<ans;
    getch();    
}
