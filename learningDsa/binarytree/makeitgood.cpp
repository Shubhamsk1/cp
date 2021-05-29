#include<bits/stdc++.h>
#define Ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    Ios;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int pos=n-1;
        while(pos>0&&arr[pos-1]>=arr[pos])  pos--;
        while(pos>0&&arr[pos-1]<=arr[pos])  pos--;
        cout<<pos<<endl;
    }
}