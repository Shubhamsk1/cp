#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,k,p;
    int x=1;
    while(t--)
    {
        cin>>n>>k>>p;
        queue<int> s[n];
        for(int j=0;j<n;j++)
        {
            for(int i=0;i<k;i++)
            {
                int l;
                cin>>l;
                s[j].push(l);
            }
        }
        
        int sum=0;
        int max,index;
        
        while(p)
        {
            max=0;
            index=0;
            for(int i=0;i<n;i++)
            {
                if(s[i].front()>max&&s[i].empty()==false)
                {
                    max=s[i].front();
                    index=i;
                }    
            }
            sum=sum+max;
            
            s[index].pop();
            p--;
        }
        cout<<"Case #"<<x<<": "<<sum<<"\n";
        x++;
    }

}