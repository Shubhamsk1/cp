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
bool isSame(string s){
	int i=0;
	int j=s.size()-1;
	int lcount=0;
	int rcount=0;
	while(i<j){
		if(s[i]=='1')
			lcount++;
		if(s[j]=='1')
			rcount++;
		i++;
		j--;
	}
	return lcount==rcount;
}
void generate(int k,string &s){

	if(k==0){
		if(isSame(s))
			cout<<s<<endl;
		return;
	}
	s.push_back('0');
	generate(k-1,s);
	s.pop_back();
	s.push_back('1');
	generate(k-1,s);
	s.pop_back();

}

void solve() 
{ 
	int n;
	cin>>n;
	string s="";
	generate(n,s);
} 
