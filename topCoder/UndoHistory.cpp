#include<iostream>
#include<vector>
#include<string>
#include<set>
using namespace std;

bool isPrefix(string str,string p)
{
	return p.length()<=str.length() && str.compare(0,p.length(),p)==0;
}
class UndoHistory
{
	public:
	static int minPresses(vector <string> lines)
	{
		int press=0;
		string buff="";
		vector <string> history;
		history.push_back("");
		for(int i=0;i<lines.size();i++)
		{
			int start=0;
			int maxPrefix=0,index=0;
			bool isBuffPrefix=false;
			if(isPrefix(lines[i],buff))
				{
					isBuffPrefix=true;
					start=buff.length();
				}

			for(int j=0;j < history.size(); j++)
			{
				if(history[j].length()>maxPrefix && isPrefix(lines[i],history[j]))
				{
					maxPrefix=history[j].length();
					index=j;
				}
			}
			if((start && maxPrefix>start+2) || (!start && buff.length()))
			{
				press+=2;
				start=maxPrefix;
				buff.assign(history[index]);
			}
			else if(i && start==0 && buff.length())
			{
				//retrieve "" from undoHistory
				press+=2;
				buff.clear();
			}
			for(int k=start;k<lines[i].length();k++)
			{
			    press++;
				buff=buff+lines[i][k];
				history.push_back(buff);
			}
			//press Enter
			press++;
		}
		return press;
	}
};
int main()
{
    vector<string> V;
    V.push_back("a");
    V.push_back("ab");
    cout<<UndoHistory::minPresses(V);
}
