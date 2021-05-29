#include<bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        string word;
        cin>>word;
        if(word.size()>10)
        {
            cout<<word[0]<<word.size()-2<<word[word.size()-1]<<endl;
        }
        else
        {
            cout<<word<<"\n";
        }
    }
}