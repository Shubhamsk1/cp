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
    string s;
    cin>>s;
    string arr="";
    for0(i,s.size()){
        if(s[i]!='a')
            arr+=s[i];
    }
    bool flag = true;
    int n =arr.size();
    int j=s.size()-n/2;
    for(int i=0;i<(n/2);i++){
        if(arr[i]!=s[j]){
            flag=false;
            break;
        }
        j++;
    }
    if((!flag)||(arr.size()&1)) cout<<":(";
    else{
        for(int i=0;i<s.size()-(n/2);i++){
            cout<<s[i];
;        }
    }

}