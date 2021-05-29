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
	sort(arr,arr+n);	
	int a[arr[n-1]+1]={0};
	for(int i=0;i<n;i++){
		a[arr[i]]++;
	}
	int x=0;
	int gayab1=0;
	int gayab2=0;
	for(int i=0;i<=arr[n-1];i++){
		if(a[i]==0){
			gayab1=i;
			
			break;
		}
		a[i]--;
		x++;
	}
	if(x==arr[n-1]+1){
		gayab1=x;
	}
	x=0;
	for(int i=0;i<=arr[n-1];i++){
		if(a[i]==0){
			gayab2=i;
			break;
		}
		a[i]--;
		x++;
	}
	if(x==arr[n-1]+1){
		gayab2=x;
	}
	cout<<gayab1+gayab2;
	
}