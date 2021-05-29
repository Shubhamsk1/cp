#include<bits/stdc++.h>
using namespace std;
bool covidsol(int arr[],int n)
{
    int distance=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
            break;
    }
    i++;
    for(;i<n;i++)
    {
        if(arr[i]!=1)
            distance++;
        else if(arr[i]==1)
        {
        if(distance<5)
            return false;
        if(distance>=5)
            distance=0;
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        bool ans=covidsol(arr,n);
        if(ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}