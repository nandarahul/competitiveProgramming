#include<iostream>
#include<stdio.h>
#include<bitset>
using namespace std;

const unsigned int x=(1<<30) +1;
static bool arr[x];
int T,N,M,A;
float P,Pc,Ps,Pro;

float computeP(int start,int end)
{
    if(end==start+1)
    {
        if(arr[start] ^ arr[start+1])
        return P;
        else if(arr[start] && arr[start+1])
        return 1;
        else
        return 0;
    }
    int diff=(end-start+1)/2;
    float CP1=computeP(start,start+diff-1),CP2=computeP(start+diff,end);

    return (CP1*CP2 + (1-CP1)*CP2*P + (1-CP2)*CP1*P);
    /*if(arr[N] && arr[N-1])
    return CP + (1-CP)*P;

    else if(arr[N] ^ arr[N-1])
    return Ps + 2*P*Pc*CP;

    else return CP*P;*/

}

int main()
{
    cin>>T;
    for(int c=0;c<T;c++)
    {
        cin>>N>>M>>P;
        fill_n(arr,arr+N,false);
        for(int i=0;i<M;i++)
        {
            cin>>A;
            arr[A]=true;
        }
        //P=Pro/100;
        P=P/100;
        Ps=P*P;
        Pc=1-P;
        printf("%.9f\n",computeP(1,N)*100);
        //cout<<computeP(1,N)<<"\n";
    }
}
