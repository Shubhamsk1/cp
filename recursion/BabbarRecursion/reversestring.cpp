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

void reverseString(string s,int n){
	if(n==0) return;
	cout<<s[n-1];
	reverseString(s,n-1);
}

void solve() 
{ 
	string s;
	cin>>s;
	reverseString(s,s.size());
}


