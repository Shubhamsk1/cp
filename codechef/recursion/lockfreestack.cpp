// Recursion,BackTracking and Dynamic Programming 
#include<bits/stdc++.h> 
#define int long long 
using namespace std; 

/*Declare function prototypes here*/
void solve();
bool rec(int cur_pos, vector<int>& solve);

/*Declare Global variables here*/
int a[1000100];
vector<vector<int>> b;
vector<int> seq ;
map<vector<int>,bool> M;
int sum;

/* Main function starts from here */
int32_t main() { 
	/*Fast IO*/ 
	ios_base::sync_with_stdio(false);cin.tie(NULL); 

	/*Input-output file creation*/
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
/*Main function Ends */



/*Write all function Definition Here */
void solve() { 
	int n;
	cin>>n;
	std::vector<int > state;
	M.clear();
	b.clear();
	seq.clear();
	sum=0;
	b.resize(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
		b[i].resize(a[i]+1);
		for(int j=0;j<a[i];j++){
			cin>>b[i][j+1];
		}
		b[i][0]=1011;
		state.push_back(a[i]);
	}
	seq.resize(sum);
	for(int i=0;i<sum;i++){
		cin>>seq[i];
	}

	if(n!=1 &&  rec(0,state)){
		cout<<"Yes";
	}
	else if (n==1){
		seq.push_back(1011);
		reverse(seq.begin(), seq.end());
		if(b[0]==seq)
			cout<<"Yes";
		else 
			cout<<"No";
	}
	else{
		cout<<"No";
	}
		
} 

bool rec(int cur_pos, vector<int>& state){
		
	/* below is dp*/
	if(M.find(state)!=M.end())
		return M[state];
	if(cur_pos == sum){
		for(int i=0;i< state.size();i++){
			// if there is element in state even after
			// cur_pos == sum then  false; 
			if(state[i]!=0) return false;

		}
		return true;
	}
	bool cur = 0;
	for(int j=0;j<state.size();j++){
		if(b[j][state[j]]==seq[cur_pos]){
				//choose this as the solution 
				state[j]--;
				//asked rec to go and whether the solution 
				//i choosed is correct
				//cur variable  is telling me whether 
				//my solution is correct;
				cur = rec(cur_pos+1,state);
				//below i am backtracking so that i can 
				// find others solution
				state[j]++;
				// i have found my solution  if current is true 
				if( cur ) break ; 
		}
	}
	/* dp */
	M[state]=cur;
	return cur;

}
