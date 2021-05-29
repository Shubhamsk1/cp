
#include<bits/stdc++.h>
using namespace std;
#define Ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
vector<int> primes;
 
int main(){
    Ios;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=30)
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            if(n-30==6){
                cout<<"5 10 15 6"<<endl;
            }else if(n-30==10)
                cout<<"5 15 14 6"<<endl;
            else if(n-30==14)
                cout<<"6 7 10 21"<<endl;
            else
            {
                cout<<"6 10 14 "<<n-30<<endl;
            }
            
        }
    }
}