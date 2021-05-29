
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
	int n,m;
	cin>>n>>m;
	std::vector<string> v;
	for(int i=0;i<n;i++){
		string temp;
		cin>>temp;
		v.push_back(temp);
	}

	int countD=0;
	for(int i=0;i<m;i++){
		if(v[n-1][i]=='D')
			countD++;
	}
	int countR=0;
	for(int i=0;i<n;i++){
		if(v[i][m-1]=='R')
			countR++;
	}
	
	cout<<countD+countR;
	
} 
