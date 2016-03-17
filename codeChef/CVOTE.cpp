#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    int N, M;
    cin>>N>>M;
    map<string,string> m1;
    map<string,int> m2,m3;//chef->votes and country->votes
    string chef,country;
    for(;N>0;N--)
    {
        cin>>chef>>country;
        m1.insert(pair<string,string>(chef,country));
        m2.insert(pair<string,int>(chef,0));
        m3.insert(pair<string,int>(country,0));
    }
    for(;M>0;M--)
    {
        cin>>chef;
        m2[chef]++;
        m3[m1[chef]]++;
    }
    map<string,int>::iterator it,itMax;
    int maxVotes=0;
    for(it=m3.begin();it!=m3.end();it++)
    {
        if(it->second > maxVotes)
        {
            itMax=it;
            maxVotes=it->second;
        }
    }
    cout<<itMax->first<<"\n";
    maxVotes=0;
    for(it=m2.begin();it!=m2.end();it++)
    {
        if(it->second > maxVotes)
        {
            itMax=it;
            maxVotes=it->second;
        }
    }
    cout<<itMax->first<<"\n";
    return 0;
}
