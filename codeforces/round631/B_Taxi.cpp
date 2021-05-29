/* Code by shubhamsk1 */
/* Shubham S Kudekar */
#include<bits/stdc++.h>
#define int long long
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
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
    vector<int> count(5,0);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        count[x]++;
    }
    int taxi=0;
    taxi+=count[1]/4;
    count[1]-=(count[1]/4);
    taxi+=min(count[2],count[1]/2);
    count[1]=count[1]-min(count[2],count[1]/2);
    count[2]=count[2]-min(count[2],count[1]/2);
    taxi+=count[2]/2;
    count[2]=count[2]-(count[2]/2);
    taxi+=min(count[1],count[3]);
    count[1]=count[1]-min(count[1],count[3]);
    count[3]=count[3]-min(count[1],count[3]);
    taxi+=count[4];
    cout<<count[1]<<" "<<count[2]<<" "<<count[3];
    cout<<taxi;
    


    
}