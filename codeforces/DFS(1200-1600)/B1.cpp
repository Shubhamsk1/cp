//Books Exchange (Easy version)
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
/*is Single Test case?*/cin>>t; 
while(t--) 
{ 
	solve(); 
	cout<<"\n"; 
} 

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl; 
return 0; 
} 
void solve() 
{ 
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=1;i<n+1;i++){
		cin>>arr[i];
	}
	int cnt[n+1]={0};
	for(int i=1;i<=n;i++){
		int j=i;
		j=arr[j];
		while(j!=i){
			cnt[i]++;
			j=arr[j];
		}
	}
	for(int i=1;i<=n;i++){
		cout<<cnt[i]+1<<" ";
	}
} 
