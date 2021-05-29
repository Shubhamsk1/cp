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

// first generate all possible combination of 0 and 1 
void generate(int k,string &s){

	if(k==0){
		cout<<s<<endl;
		return;
	}
	s.push_back('0');
	generate(k-1,s);
	s.pop_back();

		s.push_back('1');	if(s[s.size()-1]!='1'){
		generate(k-1,s);
		s.pop_back();
	}
}
void solve() 
{ 
	int k ;
	cin>>k;
	string s="";
	generate(k,s);

} 
