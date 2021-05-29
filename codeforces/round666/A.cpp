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
void solve() { 
	
	int n;
	cin>>n;
	int arr[26]={0};
	vector<string> s;
	for(int i=0;i<n;i++){
		string temp;
		cin>>temp;
		s.push_back(temp);
	}
	for(int i=0;i<s.size();i++){
		for(int j=0;j<s[i].size();j++){
			arr[s[i][j]-'a']++;
		}
	}
	bool flag =true;
	for(int i=0;i<26;i++){
		if(arr[i]>0&&arr[i]%n!=0){
			flag=false;
			break;
		}
	}
	if(flag) cout<<"YES";
	else cout<<"NO";
} 
