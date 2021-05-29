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
        string brackets;
        cin>>brackets;
        int ocount=0,ccount=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(brackets[i]=='('){
                ocount++;
            }
            else{
                if(ocount<=ccount){
                    ans++;
                }
                else{
                    ccount++;
                }
            }
        }
        cout<<ans<<"\n";
    }

}