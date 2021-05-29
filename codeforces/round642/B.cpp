    #include<bits/stdc++.h>
    #define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    using namespace std;
    #define int long long 
    void solve(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        int count=0;
        int i=0;
        int length;
        while(i<n){
            length=1;
            while(length<arr[i]&&i<n-1){
                length++;
                i++;
            }
            if(arr[i]<=length){
                count++;
            }
        i++;
        }
        cout<<count<<endl;

    }
    int32_t main(){
        int t;
        cin>>t;
        while(t--){
            solve();
        }
    }