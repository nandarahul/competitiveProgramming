#include<iostream>
#include<stack>
using namespace std;

void hello(stack<int> m)
{
    cout<<"hello"<<m.top();
    m.push(443535);
}
int main()
{
    stack<int> m;
    m.push(34);
    hello(m);
    cout<<m.top();
    return 0;
}
