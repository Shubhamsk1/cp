#include<bits/stdc++.h> 
using namespace std; 
#define int long long 
void solve(); 
int32_t main() 
{ 
ios_base::sync_with_stdio(false);cin.tie(NULL); 

#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin); 
freopen("error.txt", "w", stderr); 
freopen("output.txt", "w", stdout); 
#endif 

int t=1; 
/*is Single Test case?*/
while(t--) 
{ 
	solve(); 
	cout<<"\n"; 
} 

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
return 0; 
} 
void solve() 
{ 
	int d,t,s;
	cin>>d>>t>>s;
 	int dis=s*t;
	if(dis>=d) cout<<"Yes";
	else cout<<"No";
} 
