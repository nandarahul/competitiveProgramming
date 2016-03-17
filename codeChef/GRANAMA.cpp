#include<iostream>
#include<string>
using namespace std;

int main()
{
    string R,S;
    int T;
    cin>>T;
    for(;T>0;T--)
    {
        cin>>R>>S;
        int sz1=R.size(),sz2=S.size();
        int hash1[26],hash2[26];

        fill_n(hash1,26,0);
        fill_n(hash2,26,0);

        for(int i=0;i<sz1;i++)
        hash1[R[i]-'a']++;

        for(int i=0;i<sz2;i++)
        hash2[S[i]-'a']++;

        bool a=true,b=true;
        for(int i=0;i<26;i++)
        {
            if(hash1[i]!=hash2[i])
            {
                b=false;
                if((hash1[i]==0) ^ (hash2[i]==0))
                {
                    a=false;
                }
            }

        }
        if(a^b)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}
