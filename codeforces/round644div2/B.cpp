#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
void solve(){
    string s;
    cin>>s;
    int zerobig=0;
    int zerocount=0;
    int onecount=0;
    int onebig=0;
	for(int i=0;i<s.size();i++){
        if(s[i]=='1') onecount++;
        else zerocount++;
    }
	int ans=min(zerocount,onecount);
	for(int i=0;i<s.size();i++){
		if(s[i]=='0'){
			zerobig++;
			zerocount--;
		}
		else{
			onebig++;
			onecount--;
		}
		ans=min(zerobig+onecount,ans);
		ans=min(ans,onebig+zerocount);
	}
	cout<<ans<<endl;


}
 
 
int32_t main(){
    IOS;
    int t; 
    cin>>t;
    while(t--){
        solve();
    }
} 