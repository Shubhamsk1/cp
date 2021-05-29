#include<bits/stdc++.h>
#define int long long 
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
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
void display(int arr[],int n,int ops ){
	cout<<ops<<":";
	for(int i=1;i<=n;i++){
		cout<<arr[i]<<" " ;
	}
	cout<<"\n";
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
		display(arr,n,0);
		return dfs(arr,p,index+1,m,operations,n);

	}	
	else if(arr[p[index]]>arr[p[index]+1]){
		swap(arr[p[index]],arr[p[index]+1]);
		operations--;
		display(arr,n,1);
		return dfs(arr,p,index+1,m,operations,n);
	}
	else{
		operations--;
		display(arr,n,2);
		return dfs(arr,p,index+1,m,operations,n);
	}
}


void solve(){
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
    display(arr,n,-1);
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
    
}

int32_t main(){
    IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }

}