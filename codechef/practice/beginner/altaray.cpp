    #include<bits/stdc++.h>
    using namespace std;
    #define int long long 
    #define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int arr[100001];

    map<int,int > memo;
    int las(int start,int n)
    {
        if(memo.count(start))
        return memo[start];
        if(start==n)
        {
            memo[start]=1;
            return 1;
        }
        if((arr[start+1]<0&&arr[start]>0)||(arr[start+1]>0&&arr[start]<0))
        {
            memo[start]=1 + las(start+1,n);
            return 1 + las(start+1,n);
        } 
        else
        {    
        memo[start]=1;
        return 1;
        }
    }

    int32_t main()
    {
        IOS;
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            for(int i=1;i<=n;i++)
                cin>>arr[i];
            for(int i=1;i<=n;i++)
                cout<<las(i,n)<<" ";
            cout<<"\n";
            memo.clear();
        }
    }