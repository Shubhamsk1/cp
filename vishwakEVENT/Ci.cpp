
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
	int n ,k;
	cin>>n>>k;
	int arr[n+1]={0};
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	int mins=INT_MIN;	
	int sum=0;
	for(int i=1;i<=k;i++)
		sum+=arr[i];
	int maxs=sum;
	for(int i=1;i<n-k+1;i++){
		sum=sum-arr[i]+arr[i+k];
		maxs=max(maxs,sum);
	}
	cout<<maxs;

} 
