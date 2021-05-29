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

/*is Single Test case?*/cin>>t;
while(t--)
{ 
solve(); 

}
cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl;

return 0;
} 
/*Main function Ends */



/*Write all function Definition Here */
void solve() { 
    int n;
    cin>>n;
    vector<int> arr(2*n);

    vector<int>oddi;
    vector<int>eveni;
    for0(i,2*n) {
        cin>>arr[i];
        if(arr[i]&1) oddi.push_back(i);
        else eveni.push_back(i);
    }
    if(oddi.size()&1||eveni.size()&1){
        oddi.pop_back();
        eveni.pop_back();
    }
    else{
        if(oddi.size()>=2){
            oddi.pop_back();
            oddi.pop_back();
        }
        else if(eveni.size()>=2){
            eveni.pop_back();
            eveni.pop_back();
        }
        }   
    for(int i=0;i<eveni.size();i+=2){
        cout<<eveni[i]+1<<" "<<eveni[i+1]+1<<endl;
    }
    for(int i=0;i<oddi.size();i+=2)
        cout<<oddi[i]+1<<" "<<oddi[i+1]+1<<endl;

}