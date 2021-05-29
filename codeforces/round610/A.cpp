
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
	
	if (a>=c-d && a<=c+d && b>=c-d && b<=c+d){
		cout<<0;
	}
	else if (a>=c-d && a<=c+d &&(b<c-d||b>c+d)){
		if(b<c-d){
			cout<<c-d-b;
		}
		else{
			cout<<b-c-d;
		}

	}
	else if (b>=c-d&&b<=c+d && (a<c-d||a>c+d)){
		if(a<c-d){
			cout<<c-d-a;
		}
		else{
			cout<<a-c-d;
		}
	}
	else if( (a<c-d && b<c-d) || (a>c+d && b>c+d)){
		cout<<abs(a-b);
	}
	else if (a<c-d && b>c+d){
		cout<<c-d-a+b-c-d;
	}
	else if(a<c-d&&(b>=c-d&&b<c+d)){
		cout<<c-d-a;
	}
	else if (a>c+d&&(b>=c-d&&b<c+d)){
		cout<<a-c-d;
	}
	else if (b<c-d && a>c+d){
		cout<<c-d-b + a-c-d;
	}

	
}
