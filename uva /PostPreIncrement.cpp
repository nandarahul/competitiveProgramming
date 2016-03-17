#include<iostream>
using namespace std;
int main()
{
		int x=5;
		int y=x++ + ++x; 
		cout<<y<<"\n";
		y=x++ + ++x; // y=5+7 and x=7
		cout<<y<<"\n"; 
		y=++x + x++;//y=8 + 8 = 16
		cout<<y<<"\n";//now x=9
		y=x++ + x++;//y=9+10=19
		cout<<y<<"\n";//now x=11
		cout<<"x="<<x;
		
}
