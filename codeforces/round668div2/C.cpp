/* Code by shubhamsk1 */
/* Shubham S Kudekar */
 
#include<bits/stdc++.h> 
#define int long long 
#define endl "\n"
using namespace std; 
 
/*Declare function prototypes here*/
void solve();
 
 
 
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
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sorts[n];
	for(int i=0;i<n;i++){
		sorts[i]=arr[i];
	}
	sort(sorts,sorts+n);
	int x=0;
	int res =0;
	for(int i=0;i<n;i++){
		while(i<n && arr[i]<0){
			x++;
			i++;
		}
		res=max(res,x);
	}
	while(res!=0){
		for(int i=n-1;i>=1;i--){
			if(arr[i-1]>=arr[i] && (arr[i-1]>=0 && arr[i]<=0)){
				arr[i-1]=arr[i-1]-abs(arr[i]);
				arr[i]=0;
			}
		}
		res--;
	}
	
	int count = 0; 
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			count+=arr[i];
		}
	}
	cout<<count;
 
	
} 