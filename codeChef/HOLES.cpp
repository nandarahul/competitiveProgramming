#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    char str[101];
    for(int c=0;c<T;c++)
    {
        cin>>str;int count=0;
        for(int i=0;str[i]!='\0';i++)
        {
            switch(str[i])
            {
                case 'A':count++;break;
                case 'B':count+=2;break;
                case 'D':count++;break;
                case 'O':count++;break;
                case 'Q':count++;break;
                case 'P':count++;break;
                case 'R':count++;break;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
