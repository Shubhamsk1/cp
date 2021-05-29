#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    vector<int>v;
    cin>>s;
    for(int i=0;i<s.size();i+=2)
    {
        v.push_back(int(s[i])-48);
    }
    sort(v.begin(),v.end());
    int j=0;
    for(int i=0;i<s.size();i+=2)
    {
        s[i]=char(v[j]+48);
        j++;
    }
    cout<<s;
}