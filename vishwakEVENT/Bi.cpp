
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
	string s ;
	cin>>s;
	int x=0;
	int cnt=0;
	for(int i=0;i<s.size();i++){
		if (s[i]=='h' && cnt==0){
			cnt++;
		}
		else if(s[i]=='e'&& cnt == 1){
			cnt++;
		}
		else if(s[i]=='l'&& cnt == 2){
			cnt++;
		}
		else if(s[i]=='l'&& cnt == 3){
			cnt++;
		}
		else if(s[i]=='o'&& cnt == 4){
			cnt++;
		}
	}
	if(cnt==5) cout<<"YES";
	else cout<<"NO";
	
} 
