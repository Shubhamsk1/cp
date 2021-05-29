
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
	int a,b,c,d;

	cin>>a>>b>>c>>d;
	if(b>a){
		int temp=a ;
		a=b;
		b=temp;
	}
	if(d>c){
		int temp=c;
		c=d;
		d=temp;
	}	
	int count = 0;
	if(a==c){
		count += d+b;
		if(count==a)
			cout<<"Yes";
		else
			cout<<"No";
		
	}
	else if(b==d){
		count+=a+c;
		if(count==d)
			cout<<"Yes";
		else
			cout<<"No";
	}
	else
		cout<<"No";
} 
