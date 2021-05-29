/* Code by shubhamsk1 */
/* Shubham S Kudekar */
#include<bits/stdc++.h>
#define int long long
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define endl "\n"
#define N 10000007
using namespace std;
int fme(int a,int b){
int res=1;
while(b>0){
if(b&1){
res=(res*a)%N;
}
a=(a*a)%N;
b=b>>1;
}
return res;
}
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
    int count=0;
    while(getline(cin,s)){
        string temp1="";
        int ind=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='-'){
                ind=i+1;
                break;
            }
            temp1+=s[i];
        }
        int l=stoi(temp1);
        string temp2="";
        for(int i=ind;i<s.size();i++){
            if(s[i]==' '){
                break;
            }
            temp2+=s[i];
        }
        int r=stoi(temp2);

        int c=0;
        int flag=false;
        int index;
        for(int i=0;i<s.size();i++){
            if(s[i]==':'){
                flag=true;
                index=i-1;
                break;
            }
        }
        
        if(s[temp1.size()+temp2.size()+2]==s[temp1.size()+temp2.size()+4+l]&&
            s[temp1.size()+temp2.size()+2]==s[temp1.size()+temp2.size()+4+r]){
            continue;
        }
        else if(s[temp1.size()+temp2.size()+2]==s[temp1.size()+temp2.size()+4+l]){
            count++;
        }
        else if( s[temp1.size()+temp2.size()+2]==s[temp1.size()+temp2.size()+4+r]){
            count++;
        }
    }
    cout<<count;


}