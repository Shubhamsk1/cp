#include<bits/stdc++.h>
using namespace std;
 
int dfs(int man,int child,int cur){
    if(cur==1 && man==0 && child==0)
        return 0;
    if(cur==1 && child==0)
        return INT_MAX;
    if(cur==0)
        return min(5+dfs(man,child-2,1),7+dfs(man-1,child,1),10+dfs(man,child-1,1));
    else
        return min(5+dfs(man,child+2,0),7+dfs(man+1,child,0),10+dfs(man,child+1,0));

}
int main(){
    int man,child;
    cin>>man>>child;
    cout<<dfs(man,child,0);
}