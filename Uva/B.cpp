#include<bits/stdc++.h> 
#define int long long 
using namespace std; 
void solve(int x); 
int t;

int32_t main() { 
	
	ios_base::sync_with_stdio(false);cin.tie(NULL); 

#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("error.txt", "w", stderr); 
	freopen("output.txt", "w", stdout); 
#endif 
	
	
	/*is Single Test case?*/cin>>t; 
	int x =1;
	while(t--) 
	{ 	
		solve(x); 
		cout<<"\n";
		x++; 
	} 

	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl; 
	return 0; 
} 
void solve(int x) { 
	int  d,v,u;
	cin>>d>>v>>u;
	if(u<=v||u==0||v==0){
		cout<<"Case " << x<<": can't determine";
	}
	else{
	double fastestppathtime=d/float(u);
	double shortestpathtime=d/sqrt(u*u-v*v);
	double difference=abs(fastestppathtime-shortestpathtime);
	cout.setf(ios::fixed,ios::floatfield);
    cout.precision(3);
	cout<<difference;	
}
} 

