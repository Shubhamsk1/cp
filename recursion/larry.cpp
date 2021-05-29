#include<bits/stdc++.h>
using namespace std;
bool issort(vector<int> v)
{
    vector<int> k=v;
    sort(k.begin(),k.end());
    if(k==v)
    {
        return true;
    }
    return false;
}
bool rotatepos(vector<int> v)
{
    if(issort(v))
    {    
        return true;
    }
    for(int i=0;i<=(v.size()-3);i++)
    {
        for(int j=0;j<3;j++)
        {
            int t=v[i];
            v[i]=v[i+1];
            v[i+1]=v[i+2];
            v[i+2]=t;
            bool ans =rotatepos(v);
            cout<<"12";
            if(ans==true)
                return true;
            return false;
        }   
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            int t;
            cin>>t;
            arr.push_back(t);
        }
        bool ans=rotatepos(arr);
        if(ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}