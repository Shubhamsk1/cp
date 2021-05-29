
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
	
	/*is Single Test case?*/ cin>>t;
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
	int x,y,k;
	cin>>x>>y>>k;
	int mins=1;
	int cursticks=1;
	int curcoal=0;
	int ops=0;
	int times=0;
	times = 1+((2)*y*k-1)/(x-1);
	bool flag = false;
	int count =0;
	while(count!=k)
	{
		if(cursticks>curcoal&&curcoal!=0&&cursticks!=0){
			count+=(cursticks/curcoal);
			cursticks-=min(cursticks,curcoal);
			curcoal-=min(cursticks,curcoal);
		}
		if(curcoal>cursticks&&curcoal!=0&&cursticks!=0){
			count+=min(cursticks,curcoal);
			cursticks-=min(cursticks,curcoal);
			curcoal-=min(cursticks,curcoal);
		}
		if(cursticks>y){
			cursticks-=y;
			curcoal++;
			ops++;
		}
		if(cursticks<y)
		{
			cursticks+=x;
			cursticks--;
			ops++;
		}
		
	}
	cout<<ops;
} 
