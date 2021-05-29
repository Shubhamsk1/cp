#include<bits/stdc++.h> 
#define int long long 
#define endl "\n"
using namespace std; 
vector<vector<int>> board;

/*Declare function prototypes here*/
void solve();
bool knightTour(int row,int col,int n,int i);
void display(int n);
bool isvalid(int row,int col,int n);

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
	int r,c;
	cin>>r>>c;
	board.clear();
	board.resize(n);
	for(int i=0;i<n;i++){
		board[i].resize(n);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			board[i][j]=-1;
		}
	}

	board[0][0]=0;
	knightTour(r,c,n,1);
	
} 


void display(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<board[i][j]<<" ";
		cout<<endl;
	}

}

bool knightTour(int row, int col ,int n,int i){
	if(i==n*n){
		display(n);
		return true;

	}
	

	int choicer[8]={-2,-1,+1,+2,+2,+1,-1,-2};
	int choicec[8]={+1,+2,+2,+1,-1,-2,-2,-1};
	for(int j=0;j<8;j++){
		int newrow= row + choicer[j];
		int newcol= col + choicec[j];
		if(isvalid(newrow,newcol,n)){
			board[newrow][newcol]=i;
			if(knightTour(newrow,newcol,n,i+1)){
				return true ;
			}
			board[newrow][newcol]=-1; 
		}
	}
	return false;
}
bool isvalid(int row,int col,int n){
	return row<n && col<n && row>=0 && col>=0 && board[row][col]==-1;   
}