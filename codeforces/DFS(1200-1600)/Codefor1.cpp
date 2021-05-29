//Code for 1 

#include<bits/stdc++.h> 
#define int long long 
using namespace std; 
void solve(); 
int32_t main() 
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


void solve() 
{ 
	int n,l,r ;
	cin>>n>>l>>r;
	int height=0;
	int x=n;
	while(x){
		height++;
		x/=2;
	}
	cout<<height<<endl;

	int nodes=(pow(3,height)-1)/float(2);
	cout<<nodes<<endl;
	int arr[20]={0};
	for(int i=0;i<=nodes-4;i++){
		int nextnode=3*i;
		int val=arr[i];
		if(val!=1 && val!=0){
			arr[nextnode+1]=int32_t(val/2);
			arr[nextnode+2]=val%2;
			arr[nextnode+3]=int32_t(val/2);
		}
		else{

			arr[nextnode+1]=-1;
			arr[nextnode+2]=-1;
			arr[nextnode+3]=-1;
			
		}
	}
	for(int i=0;i<nodes-1;i++){
		cout<<arr[i]<<" ";
	}
	

	
} 
