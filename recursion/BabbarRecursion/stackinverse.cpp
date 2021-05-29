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
void reverseStack(stack<int> s, int n){

	if(s.empty()) return; 
	cout<<s.top();
	s.pop();
	reverseStack(s,n);
}
void solve() 
{ 
	stack<int> s; 
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	reverseStack(s,s.size());


} 
