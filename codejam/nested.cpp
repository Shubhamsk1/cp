#include<bits/stdc++.h>
#include <string>
using namespace std;
string nested(string arr,string curstring,int open, int close,int max)
{
    if(max==1)
        curstring+("("*arr[max-1])+arr[max-1]+(")"*arr[max-1]);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        queue<char> q;
        string arr;
        cin>>arr;
        string newstr=nested(arr,"",0,0,0);
        cout<<newstr;

    }
}