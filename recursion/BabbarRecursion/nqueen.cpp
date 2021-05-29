	#include<bits/stdc++.h> 
	#define int long long 
	#define endl "\n"
	using namespace std; 

	/*Declare function prototypes here*/
	void solve();
	void  nqueens(vector<vector<int>>& board ,int n ,int i,string& paths,vector<string>& all_paths );
	bool canplace(vector<vector<int>>& board,int r,int c,int n);
	void printmaze(vector<vector<int>>& board ,int n);

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
		vector<vector<int>> board(n,vector<int>(n,0));
		vector<string> all_paths ;
		string paths="[";
		if(n==2||n==3)
			cout<<-1;
		else{
			nqueens(board,n,0,paths,all_paths);	
			for(int i=0;i<all_paths.size();i++){
				cout<<all_paths[i]<<" ";
			}	
		}	
	} 


	void nqueens(vector<vector<int>>& board,int n ,int i,string& paths,vector<string>& all_paths){
		if(i==n){
			paths.pop_back();
			paths+="]";
			all_paths.push_back(paths);
		}
		for(int j=0;j<n;j++){
			if(canplace(board,i,j,n)){
				board[i][j]=1;
				paths+=to_string(j+1)+" ";
				nqueens(board,n,i+1,paths,all_paths);	
				board[i][j]=0;
				paths.pop_back();
				paths.pop_back();;
			}
		}
	}
	bool canplace(vector<vector<int>>& board ,int r,int c ,int n){
		for(int row=0;row<r;row++)//checking whether a queen is present in that column
	    {
	        if(board[row][c]==1)
	            return false;
	    }
	    int x=r;
	    int y=c;
	    while(x>=0&&y>=0)
	    {
	        if(board[x][y]==1)
	            return false;
	        x--;
	        y--;
	    }
	    x=r;y=c;
	    while(x>=0 && y<n)
	    {
	        if(board[x][y]==1)
	            return false;
	        x--;
	        y++;
	    }
	    return true;
	}

