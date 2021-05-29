#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long int profit(vector<long int>& price,long int n)
{
    long  int prof=0;
    for(long int i=0;i<n;i++)
    {
        if(price[i]!=0)
        {
                price[i]=price[i]-i;
                if(price[i]<0)
                    price[i]=0;
        }
        prof=prof+price[i];
    }
    return prof%MOD;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        vector<long int> price;
        for(long int i=0;i<n;i++)
        {
            long int k;
            cin>>k;
            price.push_back(k);
        }
        sort(price.begin(),price.end(),greater<long int>());
        long int maxprofit=profit(price,n);
        cout<<maxprofit<<"\n";
    }
}
