#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main()
{
    IOS;
    bool check=false;
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        int angle=180*(n-2)/n;
        int sum=angle;
        for(int i=1;i<=n;i++){
            if(sum%90==0){
                check =true;
                break;
            }
            sum=sum+angle;
        }
        if(check==true)
            cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
    }
    return 0;
    
}