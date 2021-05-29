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
void split(const string& s, char c,
           vector<string>& v) {
   string::size_type i = 0;
   string::size_type j = s.find(c);

   while (j != string::npos) {
      v.push_back(s.substr(i, j-i));
      i = ++j;
      j = s.find(c, j);

      if (j == string::npos)
         v.push_back(s.substr(i, s.length()));
   }
}



/*Write all function Definition Here */
void solve() { 
    string s;
    string temp="";
    int c=0;
    while(getline(cin,s)){
        if(s==""){
            vector<string> v;
            split(temp,' ',v);
            map<string,string> maps;
            for(int i=0;i<v.size();i++){
                vector<string> p;
                split(v[i],':',p);
                maps[p[0]]=p[1];
            }
            for(auto i=maps.begin();i!=maps.end();i++){
                cout<<i->first<<" "<<i->second<<endl;
            }
            if(maps.size()==8){
                c++;
                cout<<"valid";
            }
            else if(maps.size()==7&&maps.find("cid")==maps.end()){
                c++;
                cout<<"valid";
            }
            else{
                cout<<"invalid";
            }
            cout<<endl;
            temp="";
        }
        if(temp!="")
            temp=temp+" ";
        temp+=s;
        
    }
    cout<<c;

}