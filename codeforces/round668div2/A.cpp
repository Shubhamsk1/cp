
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
	
	/*is Single Test case?*/
	while(t--) 
	{ 
		solve(); 
		cout<<"\n"; 
	} 

	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl; 
	
	return 0; 
} 
/*Main function Ends */
class points{
	public: 
	int x,y;
};
bool mycomp(points a, points b){
	return a.x*a.x+a.y*a.y>b.x*b.x+b.y*b.y;
}

/*Write all function Definition Here */

void solve() { 
	int n;
	cin>>n;
	points arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i].x>>arr[i].y;
	}
	sort(arr,arr+n,mycomp);
	int c=pow(arr[0].x,2)+pow(arr[0].y,2);
	double k=sqrt(c);
	cout<<k;
	cout<<ceil(k);

	
} 
