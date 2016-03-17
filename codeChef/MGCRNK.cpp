#include<iostream>
using namespace std;

int S[100][100];
float P[100][100];

inline int max(int a,int b)
{
    if(a>=b)
    return a;
    return b;
}
//maximum points that can be gained starting from (i,j) to reach (N,N)
int maxP(int i,int j,int N)
{
    if(i==N-1 && j==N-1)
    return 0;

    if(P[i][j]!=0.1)
    return P[i][j];

    if(i==N-1)
        P[i][j]=S[i][j]+maxP(i,j+1,N);
    else if(j==N-1)
        P[i][j]=S[i][j]+maxP(i+1,j,N);
    else
    P[i][j]=S[i][j] + max(maxP(i+1,j,N),maxP(i,j+1,N));

    return P[i][j];
}

int main()
{
    int T,N;
    cin>>T;
    for(;T>0;T--)
    {
        cin>>N;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            cin>>S[i][j];
        }
        fill_n(&P[0][0],10000,0.1);

        double m=maxP(0,0,N);

        if(m<0)
        cout<<"Bad Judges\n";
        else
        {
            double maxAvg=m/(2*N-3);
            cout<<maxAvg<<"\n";
        }
    }
    return 0;
}
