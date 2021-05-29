#include<bits/stdc++.h> 
using namespace std; 
#define int long long
void solve();
#define MOD 1000000007 
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
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sum=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			sum = (sum%MOD+(((arr[i]%MOD)*(arr[j]%MOD))%MOD)%MOD);
		}
	}
	cout<<sum<<endl;
} 
