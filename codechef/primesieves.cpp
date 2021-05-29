#include<bits/stdc++.h>
using namespace std;
void primegenerate(int prime[],int n)
{
    for(int i=3;i<100000;i+=2)
    {
        prime[i]=1;
    }
    for(long long i=3 ;i<100000;i+=2)
    {
        if(prime[i]==1)
        {
            for(long long j=i*i;j<100000;j+=i)
            {
                prime[j]=0;
            }
        }
    }
    prime[2]=1;
    prime[1]=prime[0]=0;
}
int main()
{
    int n;
    cin>>n;
    int prime[100000]={0};
    primegenerate(prime,n);
    for(int i=0;i<n;i++)
    {
        if(prime[i]==1)
            cout<<i<<" ";
    }
}