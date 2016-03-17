/*
ID: rahulna1
PROG: ride
LANG:C++
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("ride.in.txt",ios::in);
    ofstream fout("ride.out.txt",ios::out);
    char a[7],b[7];
    int aNum=1,bNum=1;
    //while(!fin.eof())
    //{
                   fin>>a>>b;
                   cout<<a<<b;
                   int x;cin>>x;
                   for(int i=0;a[i]!='\0';i++)
                   {
                                   aNum*=(a[i]-'A'+1);
                   }
                   for(int i=0;b[i]!='\0';i++)
                   {
                                   bNum*=(b[i]-'A'+1);
                   }
                   aNum=aNum%47;
                   bNum=bNum%47;
                   if(aNum==bNum)
                   fout<<"GO\n";
                   else
                   fout<<"STAY\n";

    //}
    fout.close();
    fin.close();
    return 0;
}
