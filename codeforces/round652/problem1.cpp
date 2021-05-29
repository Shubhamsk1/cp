#include<bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int  angle=(180*(n-2))/n;
        int diff= 180-angle;
        if(angle==90){
            cout<<"YES";
        }
        else if(2*diff==90){
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<"\n";
        
    }

}
