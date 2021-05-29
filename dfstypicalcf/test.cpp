#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define IOS ios::sync_with_stdio(0);cin.tie(0);


void display(int arr[],int n){
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void solve (){
    int n,m;
    cin>>n>>m;
    int arr[n+1];
    int p[m+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=m;i++){
        cin>>p[i];
    }
    display(arr,n);
    sort(p+1,p+m+1,greater<int>());
    int temp[n+1];
    int operations=0;
    // for(int i=1;i<=n;i++){
	// 	
	// }
    // sort(temp+1,temp+n+1);
    // for(int i=1;i<=n;i++){
	// 	if(temp[i]!=arr[i]){
	// 		operations++;
	// 	}
	// }
}

int32_t main(){
    IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}