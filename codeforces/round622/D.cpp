/* Code by shubhamsk1 */
/* Shubham S Kudekar */
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
/*Declare function prototypes here*/
void solve();



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
/*Main function Ends *


/*Write all function Definition Here */
void solve() { 
    int n,x;
    cin>>n>>x;
    int arr[n];
    int sum=0;
    int c=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        c+=(arr[i]==x);
        sum+=arr[i];
    }
    if(c==n)
        cout<<0;
    else if(c>0)
        cout<<1;
    else if(sum==n*x){
        cout<<1;
    }
    else
    {
        cout<<2;
    }
    
}