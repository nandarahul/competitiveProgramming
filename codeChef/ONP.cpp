#include<iostream>
//#include<conio.h>
#include<stdio.h>
#include<ctype.h>
using namespace std;

char pop(char a[],int &pos)
{
     if(pos<0)
     cout<<"Stack Underflow!!\n";
     else
     { 
         pos--;
         return a[pos+1];
     }     
}
void push(char a[],char ch,int &pos)
{
          a[++pos]=ch;
}
int strlength(char a[])
{
    int i=0;
    for(;a[i]!='\0';i++);
    return i;    
}
int main()
{
    int t,pos=0;
    char infix[400],postfix[400];
    char stack[200];
    cin>>t;
    for(int i=0;i<t;i++)
    {
            int k=0;
            cin>>infix;
            //cin.getline(infix,400);
            for(int j=0;j<strlength(infix);j++)
            {
                  if(isalnum(infix[j]))
                  {
                        postfix[k++]=infix[j];                 
                  } 
                  else if(infix[j]== '+' ||infix[j]=='*'||infix[j]=='-'||infix[j]=='/'||infix[j]=='^'||infix[j]=='%' )
                       {
                                     push(stack,infix[j],pos);              
                       }         
                  else if(infix[j]==')')
                  {
                       postfix[k++]=pop(stack,pos);     
                  }
            }
            postfix[k]='\0';
            cout<<postfix<<"\n";
            //for(int j=0;j<strlen)        
    }
    //getch();
}
