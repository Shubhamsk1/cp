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

/*
Palindromic partion 
The idea is to go through every substring starting
from first character, check if it is palindrome. 

If yes, then add the substring to solution and 
recur for remaining part.
*/
bool isPalindrome(string str, int start, int end){
	while(start<end){
		if(str[start]!=str[end]){
			return false;
		}
		start++;
		end--;
	}

	return true;
}

void findPartition(vector<vector<string>>& allpart,vector<string>&curpart,
					int start, int n, string str){
	if(start>=n){
		allpart.push_back(curpart);
		return ;
	}

	for(int i=start;i<n;i++){
		if(isPalindrome(str,start,i)){
			curpart.push_back(str.substr(start,i-start+1));
			findPartition(allpart,curpart,i+1,n,str);
			curpart.pop_back();
		}
	}
}
void displayPartition(string s){
	int n=s.size();
	vector<vector<string>> allpart;
	vector<string> curpart;
	findPartition(allpart,curpart,0,n,s);
	for(int i=0;i<allpart.size();i++){
		for( int j=0;j<allpart[i].size();j++){
			cout<<allpart[i][j]<<" ";
		}
		cout<<"\n";
	}
}


void solve() 
{ 
	string s;
	cin>>s;
	displayPartition(s);

} 
