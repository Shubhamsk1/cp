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
/*Write all function Definition Here */
void solve() { 
    int a,c;
    cin>>a>>c;
    deque<int> one;
    deque<int> two;
    while(a||c){
        one.push_back(a%3);
        two.push_back(c%3);
        a/=3;
        c/=3;
    }
    reverse(one.begin(),one.end());
    reverse(two.begin(),two.end());
    deque<int> ans;
    int x=one.size();
    for(int i=0;i<one.size();i++){
        int x=(two[i]-one[i]);
        ans.push_back((x+3)%3);
    }
    int sum=0;
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        sum+=pow(3,i)*ans[i];
    }
    cout<<sum;
}