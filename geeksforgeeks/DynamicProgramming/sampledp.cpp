#include<bits/stdc++.h>
using namespace std;
#define MAXN 100


// initialize to -1 
int dp[MAXN]; 

// this function returns the number of 
// arrangements to form 'n' 
int solve(int n) 
{ 
// base case 
if (n == 1||n==0) 
	return 1; 
if (n < 0) 
	return 0; 


// checking if already calculated 
if (dp[n]!=-1) 
	return dp[n]; 

// storing the result and returning 
dp[n] = solve(n-1) + solve(n-3) + solve(n-5); 
return dp[n];
} 

int main(){
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<solve(n);
}