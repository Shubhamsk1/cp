#include<bits/stdc++.h> 
using namespace std; 
void solve(); 
int main() 
{ 
ios_base::sync_with_stdio(false);cin.tie(NULL); 

#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin); 
freopen("error.txt", "w", stderr); 
freopen("output.txt", "w", stdout); 
#endif 

int t=1; 
/*is Single Test case?*/ 
while(t--) 
{ 
	solve(); 
	cout<<"\n"; 
} 

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
return 0; 
} 
void solve() 
{ 
	string a , b;
	cin>>a;
	cin>>b;
	int count=0;
	int mins=INT_MAX;
	for(int i=0;i<a.size()-b.size()+1;i++){
		int count=0;
		for(int j=i;j<i+b.size();j++){
			if(a[j]!=b[j])
				count++;
		}
		mins=min(count,mins);
	}
	cout<<mins;
} 

