
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
	
	string s;
	cin>>s;
	vector<int> allpossible;
	for(int i=0;i<s.size();i++){
		int j=i+1;
		int count=0;
		if(s[i]=='1')
			count = 1;
		while(s[j]==s[i] && s[i]=='1' &&  j<s.size()){
			count++;
			j++;
		}
		i=j-1;
		allpossible.push_back(count);
	}
	int ans=0;
	sort(allpossible.begin(), allpossible.end(),greater<int>());
	for(int i=0;i<allpossible.size();i+=2){
		ans+=allpossible[i];
	}
		
	cout<<ans;
		
} 
