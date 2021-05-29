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
class points{
    public:
    int a,b;
};
bool comp(points x,points y){
    return x.a>=y.a;
}


/*Write all function Definition Here */
void solve() { 
    int n; 
    cin>>n;
    vector<points> p(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        p[i].a=x;
        p[i].b=y;
    }
    sort(p.begin(),p.end(),comp);
    int c=1;
    int total=0;
    for(int i=0;i<n;i++){
        if(p[i].b>0){
            total+=p[i].a;
            c--;
            c+=p[i].b;
        }
        else{
            if(c>1){
                total+=p[i].a;
                c--;
                c+=p[i].b;
            }
            else{
                break;
            }
        }
    }
    cout<<total;

}