#include<bits/stdc++.h> 
#define int long long 
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
	/*is Single Test case?*/cin>>t; 
	while(t--) 
	{ 
		solve(); 
		cout<<"\n"; 
	} 

	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl; 
	return 0; 
} 
bool check1(int arr[],int n){
	bool flag=true;
	for(int i=0;i<n;i++){
		if(arr[i]!=1)
			return false;

	}
	return true;
}
void solve() { 
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int previsit=-1;
	int whovisit=1;
	 
	while(!check1(arr,n)){
		sort(arr,arr+n,greater<int>()); 
		previsit=0;
		whovisit=!whovisit;
	}
	if(check1(arr,n)==1){
		if(n%2==0){
			if(whovisit==1)
				cout<<"HL";
			else 
				cout<<"T";
		}
		
		else {
			if(whovisit==1)
				cout<<"T";
			else
				cout<<"HL";
		}
	}
	cout<<endl;
}
	

