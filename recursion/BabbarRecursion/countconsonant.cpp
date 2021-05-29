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
bool isconsonant(char s){
	return !(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s==' ');
}
int countGenerate(string s, int count,int n){
	if(n<0)
		return count;
	char p=s[n];
	if(isconsonant(p))
		count++;
	return countGenerate(s,count,n-1);
}
void solve() 
{ 
	string str;
	getline(cin,str);
	cout<<countGenerate(str,0,str.size()-1);
} 
