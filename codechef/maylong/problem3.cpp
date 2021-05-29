#include<bits/stdc++.h>
using namespace std;

#define int long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool mysorted(int arr[],int n)
{
    bool ans=true;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]!=i)
        {
            ans=false;
            break;
        }   
    }
    return ans;
}

int32_t main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }  
        vector<int> i1,i2,i3;
        int c;
        int l=0;
        for(int i=1;i<=n;i++)
        {
            l++;
            if(i1.size()>=k)
                break;
            if(arr[l]==l)
                continue;
            else
            {
                int x,y;
                x=arr[arr[l]];
                arr[arr[l]]=arr[l];
                i1.push_back(l);
                i2.push_back(arr[l]);
                if(arr[x]==i1[i1.size()-1])// all 3 element get sorted
                {
                    arr[i1.size()-1]=i1.size()-1;
                    arr[i2.size()-1]=i2.size()-1;
                    i3.push_back(arr[x]);
                    arr[arr[x]]=arr[x];
                }
                else if(x==i1[i1.size()-1])//2 elements get sorted 
                {
                    for(int j=1;j<=n;j++)
                    {
                        if(arr[j]==j||j==i1[i1.size()-1]||j==i2[i2.size()-1])
                            continue;
                        else{
                            y=arr[j];
                            i3.push_back(j);
                            arr[j]=x;
                            arr[i1[i1.size()-1]]=y;
                            break;
                        }
                    }
                }
                else//1 element get sorted;
                {
                    y=arr[x];
                    arr[x]=x;
                    i3.push_back(x);
                    arr[i1[i1.size()-1]]=y;
                }
            }
        }
        if(mysorted(arr,n))
        {
            cout<<i1.size()<<"\n";
            for(int i=0;i<i1.size();i++)
            {
                cout<<i1[i]<<" "<<i2[i]<<" "<<i3[i]<<"\n";
            }
        }
        else{
            cout<<-1<<"\n";
        }
    }
}