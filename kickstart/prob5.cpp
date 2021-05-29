#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, m, i, j, ans, r, c, p1, p2, z;
    
    cin>>t;
    
    for(z=1; z<=t; z++)
    {
        cin>>r>>c;
        ans=0;
        
        ll a[r][c], f[r][c], b[r][c], u[r][c], d[r][c];
        
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                cin>>a[i][j];
            }
        }
        
        for(i=0; i<r; i++)
        {
            if(a[i][0]==1)
            f[i][0]=1;
            else
            f[i][0]=0;
        }
        
        for(i=0; i<r; i++)
        {
            for(j=1; j<c; j++)
            {
                if(a[i][j]==1)
                {
                    f[i][j]=(f[i][j-1]+1);
                }else{
                    f[i][j]=0;
                }
            }
        }
        
        for(i=0; i<r; i++)
        {
            if(a[i][c-1]==1)
            {
                b[i][c-1]=1;
            }else{
                b[i][c-1]=0;
            }
        }
        
        for(i=0; i<r; i++)
        {
            for(j=c-2; j>=0; j--)
            {
                if(a[i][j]==1)
                {
                    b[i][j]=b[i][j+1]+1;
                }else{
                    b[i][j]=0;
                }
            }
        }
        
        for(i=0; i<c; i++)
        {
            if(a[0][i]==1)
            {
                d[0][i]=1;
            }else{
                d[0][i]=0;
            }
        }
        
        for(i=1; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if(a[i][j]==1)
                {
                    d[i][j]=d[i-1][j]+1;
                }else{
                    d[i][j]=0;
                }
            }
        }
        
        for(i=0; i<c; i++)
        {
            if(a[r-1][i]==1)
            {
                u[r-1][i]=1;
            }else{
                u[r-1][i]=0;
            }
        }
        
        for(i=r-2; i>=0; i--)
        {
            for(j=0; j<c; j++)
            {
                if(a[i][j]==1)
                {
                    u[i][j]=(u[i+1][j]+1);
                }else{
                    u[i][j]=0;
                }
            }
        }
        
        
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                //cout<<f[i][j]<<" "<<b[i][j]<<" "<<u[i][j]<<" "<<d[i][j]<<"   ";
                p1=u[i][j];
                p2=b[i][j];
                
                if(p1>=2 && p2>=2)
                {
                if(p1>=p2)
                {
                    if(p1>=2*p2){
                        ans=ans+p2-1;
                    }else{
                        ans=ans+p1/2-1;
                    }
                    ans=ans+p2/2-1;
                }else{
                    if(p2>=2*p1){
                        ans=ans+p1-1;
                    }else{
                        ans=ans+p2/2-1;
                    }
                    ans=ans+p1/2-1;
                }
                }
                
                p1=u[i][j];
                p2=f[i][j];
                
                if(p1>=2 && p2>=2)
                {
                if(p1>=p2)
                {
                    if(p1>=2*p2){
                        ans=ans+p2-1;
                    }else{
                        ans=ans+p1/2-1;
                    }
                    ans=ans+p2/2-1;
                }else{
                    if(p2>=2*p1){
                        ans=ans+p1-1;
                    }else{
                        ans=ans+p2/2-1;
                    }
                    ans=ans+p1/2-1;
                }
                }
                
                p1=b[i][j];
                p2=d[i][j];
                
                if(p1>=2 && p2>=2)
                {
                if(p1>=p2)
                {
                    if(p1>=2*p2){
                        ans=ans+p2-1;
                    }else{
                        ans=ans+p1/2-1;
                    }
                    ans=ans+p2/2-1;
                }else{
                    if(p2>=2*p1){
                        ans=ans+p1-1;
                    }else{
                        ans=ans+p2/2-1;
                    }
                    ans=ans+p1/2-1;
                }
                }
                
                p1=f[i][j];
                p2=d[i][j];
                
                if(p1>=2 && p2>=2)
                {
                if(p1>=p2)
                {
                    if(p1>=2*p2){
                        ans=ans+p2-1;
                    }else{
                        ans=ans+p1/2-1;
                    }
                    ans=ans+p2/2-1;
                }else{
                    if(p2>=2*p1){
                        ans=ans+p1-1;
                    }else{
                        ans=ans+p2/2-1;
                    }
                    ans=ans+p1/2-1;
                }
                }
                //cout<<ans<<" ";
            }
            //cout<<"\n";
        }
        cout<<"Case #"<<z<<": "<<ans<<"\n";
    }
}