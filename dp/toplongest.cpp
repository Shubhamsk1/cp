#include<bits/stdc++.h>
using namespace std;
long int longest(string x,string y,long int m,long int n)
{
    long int t[m+1][n+1];
    for(long int i=0;i<m+1;i++)
        for(long int j=0;j<=n;j++)
            if(i==0||j==0)
                t[i][j]=0;
    for(long int i=1;i<=m;i++)
    {
        for(long int j=1;j<=n;j++)
        {
            if(x[i-1]==y[j-1])
                t[i][j]=1+t[i-1][j-1];
            else{
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    return t[m][n];
}
int main()
{
    string x,y;
    cin>>x>>y;
    long int length=longest(x,y,x.size(),y.size());
    cout<<length;
}