
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

class athlete{
public:
	int speed;
	int index;
	int firstpos;
};
bool mycomp(athlete a,athlete b){
	
	return a.firstpos<b.firstpos;

}
/*Write all function Definition Here */

void solve() { 
	int n;
	cin>>n;
	athlete  arr[n];
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		arr[i].speed=x;
		arr[i].index=i;
		arr[i].firstpos=i+x;
	}
	stable_sort(arr,arr+n,mycomp);
	set<int> maxs;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i].speed>arr[j].speed&&(arr[i].index-arr[j].index)%(arr[i].speed-arr[j].speed)==0){
				int x=(arr[i].index-arr[j].index)/(arr[i].speed-arr[j].speed);
				if(x>0){
					maxs.insert(i);
					maxs.insert(j);
				}
			}
		}
	}
	

	int k=0;

	if(maxs.size()==0)
		k=maxs.size()+1;
	else
		k=maxs.size();
	int mins=0;
	if(n-k==0)
		mins=n;
	else{ 
		mins=min(n-k,k);
	}
	cout<<mins<<" "<<k;

} 
