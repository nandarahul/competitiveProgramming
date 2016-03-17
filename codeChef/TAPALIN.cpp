#include<iostream>
using namespace std;

int modular_pow(int base,int exponent,int modulus)
{
    int result=1;
    for(;exponent>0;exponent=exponent>>1)
    {
        if(exponent&1)
            result=(result*base)%modulus;
        base=(base*base)%modulus;
    }
    return result;
}
int main()
{
    int P=1000000007;
    int T,N;
    cin>>T;
    int inverse=modular_pow(25,P-2,P)%P;
    cout<<"inverse"<<inverse<<"\n";
    for(;T>0;T--)
    {
        cin>>N;
        int temp=modular_pow(26,N/2,P);
        cout<<"temp:"<<temp<<"\n";
        int result=(52*(temp-1)*inverse)%P;
        if(N&1)
            result=result+temp*26;
        cout<<result<<"\n";
    }
}
