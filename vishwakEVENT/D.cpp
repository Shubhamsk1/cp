
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
	string  a;
	string b;
	cin>>a>>b;
	string ans ;
	cin>>ans;
	int arr1[26]={0};
	int arr2[26]={0};
	for(int i=0;i<a.size();i++){
		arr1[a[i]-'a']++;
	}
	for(int i=0;i<b.size();i++){
		arr1[b[i]-'a']++;
	}
	for(int i=0;i<ans.size();i++){
		arr2[ans[i]-'a']++;
	}
	bool flag = true ;
	for(int i=0;i<26;i++){
		if(arr1[i]!=arr2[i]){
			flag = false;
			break;
		}
	}
	if(flag) cout<<"YES";
	else cout<<"NO";

	
} 
