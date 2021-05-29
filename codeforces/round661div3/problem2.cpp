#include<bits/stdc++.h>
using namespace std;
#define Ios ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
void display(vector<long int> arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    long int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        vector<long int> a;
        vector<long int> b;
        for(int i=0;i<n;i++){
            long int x;
            cin>>x;
            a.push_back(x);
        }
        
        for(int i=0;i<n;i++){
            long int x;
            cin>>x;
            b.push_back(x);
        }
        long int mina=*min_element(a.begin(),a.end());
        long int minb=*min_element(b.begin(),b.end());
        long long int moves=0;
        for(long int i=0;i<n;i++){   
            if(a[i]!=mina&&b[i]!=minb){
                long int x=min(a[i]-mina,b[i]-minb);
                a[i]=a[i]-x;
                b[i]=b[i]-x;
                moves+=x;
            }
            if(a[i]!=mina){
                moves+=(a[i]-mina);
            }
            if(b[i]!=minb){
                moves+=(b[i]-minb);
            }
        }
        cout<<moves<<endl;
        
    }

}