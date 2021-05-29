	#include<bits/stdc++.h> 
	#define int unsigned long long 
	#define endl "\n"
	using namespace std; 

	/*Declare function prototypes here*/
	void solve();

	map<int,int> M;
	int ways(int n,int m);



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
		int ans= ways(n,m);
		cout<<ans%m;
	} 


	int ways(int n,int m){
		if(M.find(n)!=M.end())
			return M[n]%m;
		if(n<=0)
			return 0;
		else if( n == 1 || n == 2 )
			return M[n]=2%m;
		return M[n]=(ways(n-1,m)%m + ways(n-2,m) %m)%m;

	}
