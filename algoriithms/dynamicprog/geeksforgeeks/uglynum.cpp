#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool checkugly(int n)
{
    if(n%2==0)
      if((n/2)%3==0)
        if((n/6)%5==0)
            return true;
    else if(n%3==0)
      if((n/3)%2==0)
        if((n/6)%5==0)
            return true;
    else if(n%5==0)
      if((n/5)%2==0)
        if((n/10)%3==0)
            return true;                
    return false;
}
int32_t main()
{
    int n;
    cin>>n;
    stack<int> s;
    s.push(1);
    for(int i=2;i<=n;i++)
    {
        if(checkugly(i))
        {    
            s.pop();
            s.push(i);
        }
    }  
    cout<<s.top(); 
}
