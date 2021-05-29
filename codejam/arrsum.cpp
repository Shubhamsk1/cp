#include<bits/stdc++.h>
using namespace std;
void printa(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void tracegenerate(int a[],int n,int k)
{
    int sum=0;
    while(abs(sum-k)>n)
    {
        for(int i=0;i<n;i++)
        {
            sum=sum+1;
            a[i]=a[i]+1;
        }
    }
    for(int i=0;i<abs(sum-k);i++)
    {
        a[i]=a[i]+1;
    }
}
void latinsquare(int arr[50][50],int n,int l)
{
    int k=n+l;
    int j=0;
    for(int i=0;i<n;i++)
    {
        int temp=k;
        int c=0;
        while(temp<=n)
        {
            arr[i][c]=temp;
            temp++;
            c++;
        }
        for(int j=1;j<k;j++)
        {
            arr[i][c]=j;
            c++;
        }
        k--;
    }

        
}
int main()
{
    int t;
    cin>>t;
    int x=1;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[50][50]={0};
        
        if(k%n!=0||k!=n*(n+1)/2)
        {
            cout<<"Case #"<<x<<": IMPOSSIBLE";
        }
        else if(k%n==0)
        {
            latinsquare(arr,n,k%n-1);
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<arr[i][j]<<" ";
                }
                cout<<"\n";
            }

        }
        int a[n]={0};
        tracegenerate(a,n,k);
        x++;
    }
}