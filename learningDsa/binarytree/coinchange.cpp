#include<bits/stdc++.h>
using namespace std;
int s[301];

int ways(int n,int m){
    if(n==0){
        return 1;
    }
    if(n<0)
        return 0;
    else if(m==0){
        return 0;
    }
    else{
        return ways(n-s[m],m-1)+ways(n,m-1);
    }
}

int main()
{
    int t;
    int m,n;
    cin>>t;
    while(t--){
        memset(s,-1,sizeof(s));
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>s[i];
        }
        cin>>n;
        
        cout<<ways(n,m)<<"\n";
    }
	//code
	return 0;
}