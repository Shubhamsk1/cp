#include<bits/stdc++.h> 
#define int long long 
using namespace std; 
void solve(); 

int32_t  main() { 
	
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

int find_max_length(int first,int last){
	if(first==last)
		return 0;
	return  1+last-first+ find_max_length(first+1,last); 
}

int find_min_length(int first,int last ){
	if(last-first<=1)
			return 0;
	int mid=(first+last)/2;
	return last - first + find_min_length(first,mid)+find_min_length(mid,last);

}

void solve() { 
	int n,m;
	cin>>n>>m;
	int min_length=0;
	int max_length=0;
	min_length=find_min_length(0,n+1);
	max_length=find_max_length(1,n+1);
	cout<<min_length<<" "<<max_length<<"\n";
	if(m<min_length){
		cout<<-1;
	}
	else if(m>=min_length && m<max_length){
		cout<<0;
	}
	else{
		cout<<m-max_length;
	}

}

	

