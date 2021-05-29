
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
	int ec=0;
	int oc=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=n-2,j=n-1;i>=0&&j>=1;i-=2,j-=2){
		if((arr[i]+arr[j])%2!=0){
			if(arr[j]>=arr[i]){
				arr[j]=-1;
			}
			else{
				arr[i]=-1;
			}
		}
	}
	int length=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=-1){
			length++;
		}
	}
	cout<<length<<endl;
	for(int i=0;i<n;i++){
		if(arr[i]!=-1){
			cout<<arr[i]<<" ";
		}
	}

} 
