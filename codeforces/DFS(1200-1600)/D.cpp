#include<bits/stdc++.h> 
using namespace std; 
void solve(); 
int main() 
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
	int n,L,R;
	cin>>n>>L>>R;
	int Z=0;
	for(int i=L;i<=R;i++) {
		int j=(i & (i-1));
		int k=i^j;
		// cerr<<i<<" gives "<<k<<endl;
		if(n&k) ++Z;
	}
	cout<<Z<<endl;
} 
