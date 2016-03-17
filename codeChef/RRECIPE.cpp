#include<iostream>
#include<cstring>
using namespace std;
int pow(int b,int e,int m)
{
    if(e==0)
    return 1;
    int P=pow(b,e/2,m);
    if(e%2)
    return (P*P*b)%m;
    else
    return (P*P)%m;
}

int simple_pow(int b,int e,int m)
{
    if(e==0)
    return 1;

    int result=1;
    for(;e>0;e--)
        result=(result*b)%m;
    return result;
}

int countPalind(char* str)
{
    int sz=strlen(str);
    int exp=0;int i=0,j=sz-1;
    for(;i<j;i++,j--)
    {
        if(str[i]==str[j] && str[i]=='?')
            exp++;

        else if(str[i]!=str[j] && str[i]!='?' && str[j]!='?')
            return 0;
    }
    if(i==j && str[i]=='?')
    exp++;

    //cout<<"EXP:"<<exp<<"\n";
    //return simple_pow(26,exp,10000009);
    return pow(26,exp,10000009);
}
int main()
{
    static char str[1000001];
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>str;
        cout<<countPalind(str)<<"\n";
    }
    return 0;
}
