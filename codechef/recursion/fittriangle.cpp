#include<bits/stdc++.h> 
#define int long long 
using namespace std; 
void solve(); 

int32_t main() { 
	
	ios_base::sync_with_stdio(false);cin.tie(NULL); 

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

//the isocels of base n can fit these many square
// 
int findsquare(int n){
	if(n==1||n==2||n==3)
		return 0;
	return (n/2-1)+findsquare(n-2);
}

void solve() { 
	int b;
	cin>>b;
	cout<<findsquare(b);

} 
