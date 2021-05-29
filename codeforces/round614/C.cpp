#include<bits/stdc++.h> 
#define int long long 
const int N = 100001;
using namespace std; 
void solve(); 

int32_t main() { 
	
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
	} 

	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl; 
	return 0; 
} 

bool dfs( int arr[2][N] , int sr,int sc, int dr,int dc){
	if(sr>=2 || sc>dc || arr[sr][sc]==1) return false;
	if(sr==dr && sc==dc){
		return true;
	}
	return dfs(arr,sr+1,sc,dr,dc) || dfs(arr,sr,sc+1,dr,dc);
}

void solve() { 
	int n,q;
	cin>>n>>q;
	int  arr[2][N];
	for(int i=0;i<2;i++){
		for(int j=0;j<n;j++)
				arr[i][j]=0;
	}
	int rowlava[2]={0};
	int row[q];
	int col[q];
	
	for(int i=0;i<q;i++){
		cin >> row[i]>>col[i];
	}
	bool ans =false;
	for(int i=0;i<q;i++){
		int x= row[i];
		int y= col[i];
		arr[x][y] = !arr[x][y];
		ans = dfs(arr,0,0,1,n-1);
		if(ans)cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
	

} 
