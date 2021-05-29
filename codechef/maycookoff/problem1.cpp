    #include<bits/stdc++.h>
    using namespace std;

    #define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long 
    #define endl "\n"
    map<int,int> counts;
    int32_t main()
    {
        IOS;
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            int a[n+1];
            for(int i=1;i<=n;i++)
            {   
                int x; 
                cin>>a[i];
                x=a[i]; 
                counts[x]++;
            }
            bool ans1=true;
            for(auto i=counts.begin();i!=counts.end();i++)
            {
                for(auto j=counts.begin();j!=counts.end();j++)
                {
                    if(i==j)
                        continue;
                    if(i->second==j->second)
                    {
                        ans1=false;
                        break;
                    }
                }
                if(ans1==false)
                    break;
            }
            bool ans2;
            vector<int> visit;
            for(int i=1;i<=n;i++)
            {
                
                bool k=true;
                for(int j=0;j<visit.size();j++)
                {
                    if(visit[j]==a[i]&&visit[visit.size()-1]!=a[i])
                    {
                        k=false;
                        break;
                    }
                }
                visit.push_back(a[i]);
                ans2=k;
                if(ans2==false)
                    break;
            }
            if(ans1&&ans2)
            {
                
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
    }