#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int gcd(int x,int y)
{
    if (x==y)
        return x;
    else if(x<y)
        return gcd(x,y-x);
    else 
        return gcd(x-y,y);
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void printv(vector<int> arr)
{
    for(auto i=arr.begin();i!=arr.end();i++)
    {
        cout<<*i<<" ";
    }
}
int main()
{
    int t;
    cin>>t;
    int p=1;
    while(t--)
    {
        int n,l;
        cin>>n>>l;
        int  arr[l];
        for(int i=0;i<l;i++)
        {
            cin>>arr[i];
        }
        int primes[l+1];
       
        int j=0;
        int s;
        for(int i=0;i<l-1;i+=2)
        {
            int num=gcd(arr[i],arr[i+1]);
            int k= arr[i]/float(num);
            s=arr[i+1]/float(num);
            primes[j]=k;
            primes[j+1]=num;
            j=j+2;
        }
        primes[l-1]=s;
        primes[l]=arr[l-1]/float(s);
        vector<int> sortprime(primes,primes+l+1);
        sort(sortprime.begin(),sortprime.end());
        vector<int>:: iterator ip;
        ip=unique(sortprime.begin(),sortprime.end());
        sortprime.resize(distance(sortprime.begin(),ip));
        map<int, char> prime;
        for(int i=0;i<26;i++)
        {
            prime[sortprime[i]]='A'+i;
        }
        cout<<'\n';
        cout<<"Case #"<<p<<": ";
        for(int i=0;i<l+1;i++)
        {
            cout<<prime[primes[i]];
        }
        cout<<"\n";
        p++;
    }
    return 0;
}