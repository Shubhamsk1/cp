#include<bits/stdc++.h>
using namespace std;

int trace(int arr[100][100],int n)
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                k=k+arr[i][j];
        }
    }
    return k;
}
int repeatrows(int arr[100][100],int n)
{
    int r=0;
    int a[n];
    int count[101];
    for(int i=0;i<n;i++)
    {
        memset(count,0,sizeof(count));
        for(int j=0;j<n;j++)
        {
            a[j]=arr[i][j];
            count[a[j]]+=1;
        }
        for(int k=0;k<101;k++)
        {
            if(count[k]>1)
            {
                r++;
                break;
            }
        }
    }
    return r;
}
int repeatcols(int arr[100][100],int n)
{
    int c=0;
    int a[n];
    int count[101];
    for(int i=0;i<n;i++)
    {
        memset(count,0,sizeof(count));
        for(int j=0;j<n;j++)
        {
            a[i]=arr[j][i];
            count[a[i]]+=1;
        }
        for(int k=0;k<101;k++)
        {
            if(count[k]>1)
            {
                c++;
                break;
            }
        }
    }
    return c;
}


int main()
{
    int t;
    cin>>t;
    int arr[100][100]={0};
    int x=1;
    while(t--)
    {
        
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        int k=trace(arr,n);
        int r=repeatrows(arr,n);
        int c=repeatcols(arr,n);
        cout<<"Case #"<<x<<": "<<k<<" "<<r<<" "<<c<<"\n";
        x++;
    }
}