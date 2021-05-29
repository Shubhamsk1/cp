
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


class matchbox{
public:
	int a,b;
};
bool mycommp(matchbox x,matchbox y){
	return x.b>y.b;
}
/*Write all function Definition Here */

void solve() {
	int n ,m; 
	cin>>n>>m;
	matchbox arr[m];
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		arr[i].a=x;
		arr[i].b=y;
	}
	int sum=0;
	sort(arr,arr+m,mycommp);
	for(int i=0;i<m&&n>=0;i++){
		sum+= arr[i].b*min(arr[i].a,n);
		n=n-min(arr[i].a,n);
		if(n<=0)
			break;
	}
	cout<<sum;

} 
