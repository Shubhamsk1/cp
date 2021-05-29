/*Rat in a maze*/

#include<bits/stdc++.h> 
#define int long long 
#define endl "\n"
vector<vector<int>> maze;
using namespace std; 

/*Declare function prototypes here*/
void solve();
void path(vector<vector<int>& matrix,int row,int col,int n);


/*Declare Global variables here*/



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
	
	/*is Single Test case?*/
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
	vector<vector<int>> matrix(n,vector<int>(n,0));
	vector<string>all_paths;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>>matrix[i][j];
		}
	}
	string paths="";
	path(matrix,0,0,n,paths,all_paths);
	for(int i=0;i<all_paths.size();i++)
		cout<<all_paths[i]<<endl;
} 
void path(std::vector<int>& matrix,int row, int col,int n,string& paths,vector<string> all_paths){
    if(paths.size()==2*n && row==n-1 && col==n-1){
    	all_paths.push_back(paths);
    	return;
    }
	char choicedir[4]={'U','R','L','D'};
	int choicer[4]={-1,0,+1,0};
	int choicec[4]={0,+1,0,-1};
	for(int i=0;i<4;i++){
		int newrow = row + choicer[i];
		int newcol = col + choicec[i];
		if(isvalid(newrow,newcol,matrix,n)){
			paths.push_back(choicedir[i]);
			path(matrix,row,col,n,string);
			matrix[newrow][newcol]=1;
			paths.pop_back();

		}
	}
}
