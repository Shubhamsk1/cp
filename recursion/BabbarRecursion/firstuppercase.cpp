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
void firstUpperCase(string s,int start,int end,int count){

	if(start>end){
		return;
	}
	if(s[start]>64 && s[start]<94 && count==0){
		cout<<s[start];
		count++;
		return;
	}
	firstUpperCase(s,start+1,end,count);
}

void solve() 
{ 
	string s;
	cin>>s;
	firstUpperCase(s,0,s.size()-1,0);
} 
