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
cout<<"\n";
}
cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl;

return 0;
} 
/*Main function Ends */



/*Write all function Definition Here */
void solve() { 
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    int n=s.size();
    deque<char> p;
    for(auto x:s)p.push_back(x);
    while(!p.empty() && p.front()=='0') p.pop_front();
    while(!p.empty()&& p.back()=='0') p.pop_back();
    if(p.empty()){
        cout<<"0";
        return;
    }
    vector<int> holesize;
    int hole=0;
    for(auto l:p){
        if(l=='0'){
            hole++;
        }
        else{
            if(hole>0)
                holesize.push_back(hole);
            hole=0; 
        }
    }
    int total=(holesize.size()+1)*a;
    sort(holesize.begin(),holesize.end(),greater<int>());
    int x=0;
    while(holesize.size()>0){
        x+=holesize.back();
        holesize.pop_back();
        total=min(total,a*(holesize.size()+1)+b*x);
    }
    cout<<total;
}