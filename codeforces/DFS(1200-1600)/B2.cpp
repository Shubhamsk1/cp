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
	int n ;
	cin>>n;
	vector<set<int>> adj(n, set<int>());
	for(int i=0;i<n;i++){	
		int pos ;
		cin>>pos;
		pos--;
		if(i!=pos){
			adj[i].insert(pos);
			adj[pos].insert(i);
		}
	}
	int cnt[n];
	for(int i=0;i<n;i++){
		cnt[i]=adj[i].size();
		cout<<cnt[i]+1<<" ";
	}
} 
