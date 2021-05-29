#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,q;
    cin>>t;
    int count=0;
    map<char ,int> k;
    int x=1;
    while(t--)
    {   
        int counteve=0, countodd=0;
        count=0;
        cin>>n>>q;
        string s;
        cin>>s;
        int arr[q][2];
        //taking input
        for(int i=0;i<q;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>arr[i][j];
            }
        }
        //actual work
        for(int i=0;i<q;i++)
        {
            countodd=0;
            counteve=0;
            for(int j=arr[i][0]-1;j<=arr[i][1]-1;j++)
                {
                        k[s[j]]++;
                }
        
               
            if((arr[i][1]-arr[i][0]+1)%2==0)
            {
                for(auto itr=k.begin();itr!=k.end();itr++)
                {
                    if(itr->second%2!=0)
                    {
                        counteve=1;
                        break;
                    }
                }
                if(counteve!=1)
                    count++;
            }
            else
            {
                for(auto itr=k.begin();itr!=k.end();itr++)
                {
                    if(itr->second%2!=0)
                    {
                        countodd++;
                    }
                }
                if(countodd<=1)
                    count++;
            }
            k.clear();
        }
        cout<<"Case #"<<x<<": "<<count<<"\n";
        x++;
    }
}