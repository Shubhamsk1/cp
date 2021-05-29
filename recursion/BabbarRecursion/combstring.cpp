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
void generate(vector<vector<string>> &allpart,vector<string> &curpart,
	 int start , int n, string str ){
	if(start>=n){
		allpart.push_back(curpart);
		return;

	}

	for(int i=start;i<n;i++){
		curpart.push_back(str.substr(start,i-start+1));
		generate(allpart,curpart,i+1,n,str);
		curpart.pop_back();
	}
}

void display(string str){

	int n = str.size();
	vector<vector<string>> allpart;
	vector<string> curpart;
	generate(allpart,curpart,0,n,str);
	for(int i=0;i<allpart.size();i++){
		for(int j=0;j<allpart[i].size();j++){
			cout<<allpart[i][j]<<" ";
		}
		cout<<endl;
	}


}
void solve() 
{ 
	string s ;
	cin>>s;
	display(s);
} 
