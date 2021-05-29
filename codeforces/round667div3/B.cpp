
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
	int a,b,x,y,n;
	cin>>a>>b>>x>>y>>n;
	int k1=a-x;
	int k2=b-y;
	if(a>b){
		int s=min(k2,n);
		if(n-s<0){
			b=b-n;
		}
		else{
			n=n-s;
			b=b-s;
		}
		s=min(k1,n);
		if(n-s<0){
			a=a-n;
		}
		else{
			n=n-s;
			a=a-s;
		}
	}
	else if(a<b){

		int s=min(k1,n);
		if(n-s<0){
			a=a-n;
		}
		else{
			n=n-s;
			a=a-s;
		}
		s=min(k2,n);
		if(n-s<0){
			b=b-n;
		}
		else{
			n=n-s;
			b=b-s;
		}
	}
	else{
		int k= min(x,y);
		if(k>=9)
		cout<<a*k;

	}
	
	
	
} 
