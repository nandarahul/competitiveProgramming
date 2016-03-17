#include<iostream>
using namespace std;
//100001
static int comb[100000000];

int count(int N)
{
    if(N==1)
    {
        return 1;
    }
    if(N==2)
    {
        return 2;
    }
    if(N==3)
    {
        return 3;
    }
    comb[N]=count(N-1)+count(N-2)+count(N-3);
    return comb[N];
}

int main()
{
    int N;
    cin>>N;
    int result=count(N);
    cout<<result;
}
/*
Question 22 / 22

Given a string s, its roughness is calculated as follows: Let c1 be the letter that appears most frequently in s, and let c2 be the letter that appears least frequently (c2 must appear at least once). The roughness of s is the number of occurrences of c1 minus the number of occurrences of c2. Write a program to find the minimum possible roughness of a string that can be achieved if you are allowed to remove up to n characters in a string. Note: you are allowed to modify s by erasing between 0 and n characters, inclusive.

Input

First line of the input will be the string, s followed by a number (n) in next line indicating the maximum number of modifications allowed

Output

Return the minimum possible roughness that can be achieved by such a modification.

Sample Testcases

Input#00:
aaaaabbc
1

Output #00:
3

Explanation:
We may remove one 'a' or one 'c' to obtain the minimal roughness of 3

Input #01:
veryeviltestcase
1

Output #01:
2

NOTE: You need to write the full code taking all inputs are from stdin and outputs to stdout
If you are using "Java", the classname is "Solution"



*/
