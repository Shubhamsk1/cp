#include<bits/stdc++.h> 
#define int long long 
#define endl "\n"
using namespace std; 

/*Declare function prototypes here*/
void solve();
bool subsetsum(int arr[],int n,int sum,int start_index);
void display(std::vector<int > subset);

/*Declare Global variables here*/




/* Main function starts from here */
int32_t main() { 
	/*Fast IO*/ 
	ios_base::sync_with_stdio(false);cin.tie(NULL); 

	/*Input-output file creation*/
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
/*Main function Ends */



/*Write all function Definition Here */

void solve() { 
	int n ;
	cin >>n;
	int sum =0;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	sort(arr,arr+n);
	if(sum&1){
		cout<<"NO";
	}
	else {
		sum/=2;
		bool ans = subsetsum(arr,n,sum,0);
		if(ans) cout<<"YES";
		else cout<<"NO";
	}
	
} 

bool subsetsum(int arr[],int n,int sum,int start_index){
	if(sum==0){
		return true;
	}
	if(sum<0)
		return false;
	for(int i=start_index;i<n;i++){
		sum= sum-arr[i];
		if(subsetsum(arr,n,sum,i))
			return true;
		sum=sum + arr[i];
	
	}
	return false;			
}
void display(std::vector<int> subset){
	for(int i =0;i<subset.size();i++){
		cout<<subset[i]<<" "; 
	}
	cout<<endl;
}