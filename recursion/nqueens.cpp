
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
	int a;
	int b;
	cin>>a>>b;
	int x=0;
	int moves=0;
	int k=0;
	if(a==b){
		cout<<0;
	}
	else if(a>b){
		x=a-b;
		k=x%10;
		if(k!=0)
			moves=x/10+1;
		else
			moves=x/10;
		cout<<moves;
	}
	else{
		x=b-a;
		k=x%10;
		if(k!=0)
			moves=x/10+1;
		else
			moves=x/10;
		cout<<moves;
	}
	
	
} 
