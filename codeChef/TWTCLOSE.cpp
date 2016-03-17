#include<iostream>
#include<cstring>
#include<string>
#include<cstdlib>
//#include<conio.h>
using namespace std;
int main()
{
    int tweets[1001]={0};char *num=new char[10];
    int N,K;
    cin>>N>>K;
    string comm;
    //getline(cin,comm,'\n');
    cout<<N<<K<<"\n";
    for(int count=0;count<K;count++)
    {
            //cin>>comm;
            getline(cin,comm,'\n');
            cout<<"SUCK DICK"<<comm<<"\n";
            //cin.getline(comm,'\n');
            if(comm[2]=='I')
            {
                            //cout<<comm.substr(6);
                            //strcpy(num,(comm.substr(6)).c_str());
                   //cout<<num;                              
                   tweets[atoi((comm.substr(6)).c_str())]^=1;                   
            } 
            else{
                 for(int i=1;i<=N;i++)
                 tweets[i]=0;
                }
            int sum=0;
            for(int i=1;i<=N;i++)
            sum+=tweets[i];
            printf("%d\n",sum);
    }
    //getch();
}

