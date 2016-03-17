/*
ID: rahulna1
PROG: gift1
LANG:C++
*/
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;

int searchIndex(vector<string> names,string str)
{
    int sz=names.size();
    for(int i=0;i<sz;i++)
    {
        if(!names[i].compare(str))
        return i;
    }
    return -1;
}
int main()
{
    ifstream fin("gift1.in",ios::in);
    ofstream fout("gift1.out",ios::out);
    vector<string> names;
    int NP;
    fin>>NP;

    int *money=new int[NP];
    fill_n(money,NP,0);

    string str;
    for(int i=0;i<NP;i++)
    {
        fin>>str;
        names.push_back(str);
    }
    for(int i=0;i<NP;i++)
    {
        fin>>str;
        int pos=searchIndex(names,str);
        int amount,NG;
        fin>>amount>>NG;
        money[pos]-=amount;//initial amount
        if(NG==0)
        {
            names[pos]+=amount;
        }
        else
        {
            int amountGiven=amount/NG;
            int amountLeft=amount%NG;
            money[pos]+=amountLeft;
            string person;
            for(int j=0;j<NG;j++)
            {
                fin>>person;
                money[searchIndex(names,person)]+=amountGiven;
            }
        }
    }
    for(int i=0;i<NP;i++)
    {
        fout<<names[i]<<" "<<money[i]<<"\n";
    }
    fin.close();
    fout.close();
    return 0;
}
