#include<bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Max 200005
int arr[Max];
int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        //sort(arr,arr+n,greater<int>());
        int x=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]%k==0){
                continue;
            }
            else if((arr[i]+x)%k==0){
                arr[i]=arr[i]+x;
                x++;
                count++;
            }
            else{
                while((arr[i]+x)%k!=0){
                    x++;
                    count++;
                }
                arr[i]=arr[i]+x;
                x++;
                count++;
            }
        }
        cout<<count<<"\n";

    }
}