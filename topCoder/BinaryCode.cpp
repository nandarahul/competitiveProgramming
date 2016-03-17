#include<sstream>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class Time
{
	public:
	string whatTime(int seconds)
	{
		int a=seconds/3600;
		ostringstream ostr;
		ostr<<a;
		string t=ostr.str();
		a=a%3600;
		a=a/60;
		ostringstream ostr;
		ostr<<a;
		t+=":";t+=ostr.str();
		a=a%60;
		ostringstream ostr;
		ostr<<a;
		t+=":";t+=ostr.str();
		return t;
	}
};
int main()
{

}
