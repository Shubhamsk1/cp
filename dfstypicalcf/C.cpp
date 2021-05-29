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
	cin>>t; 
	while(t--) 
	{ 
		solve(); 
		cout<<"\n"; 
	} 

	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 
bool isAcending(int arr[],int n){
	bool flag=true;
	for(int i=1;i<n;i++){
		if(arr[i]>arr[i+1]){
			flag = false;
			break;
		}
	}
	return flag;
}

bool dfs(int arr[],int p[],int index,int m,int operations,int n){
	
	if(isAcending(arr,n)){
		return true;
	}

	if(operations<=0)
		return false;

	if(index>m){
		index=1;
	}
	if(arr[p[index]]<arr[p[index]+1]){
		operations--;
		return dfs(arr,p,index+1,m,operations,n);

	}	
	else if(arr[p[index]]>arr[p[index]+1]){
		swap(arr[p[index]],arr[p[index]+1]);
		operations--;
		return dfs(arr,p,index+1,m,operations,n);
	}
	else{
		operations--;
		return dfs(arr,p,index+1,m,operations,n);
	}
}

void solve() 
{ 
	int n,m;
	cin>>n>>m;
	int arr[n+1],p[m+1];
	memset(arr,0,sizeof(arr));
	memset(p,0,sizeof(p));
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<=m;i++){
		cin>>p[i];
	}
	sort(p+1,p+m+1,greater<int>());
	int operations=0;
	int temp[n+1];
	for(int i=1;i<=n;i++){
		temp[i]=arr[i];
	}
	sort(temp+1,temp+n+1);
	
	for(int i=1;i<=n;i++){
		if(temp[i]!=arr[i]){
			operations++;
		}
	}
	
	bool ans=dfs(arr,p,1,m,operations*2,n);
	if(ans) cout<<"YES"; 
	else cout<<"NO";
} 
