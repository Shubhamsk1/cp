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

void generateSubstrings(string str, int  start ,int end){

	if(start >=end){
		
	}
	string subs=" "
	for(int i = start ;i<=end ;i++){
		subs+=str[i];
	}
	cout<<subs<<endl;
	for(int i= start;i<=end; i++){
		cout<<s.substr();
		generateSubstrings(str,start, end-1)
	}
	
}



void solve() 
{ 
	string s;
	cin>>s;
	generateSubstrings(s,0,s.size()-1);
} 
