#include<bits/stdc++.h>
typedef struct object{
    int weight;
    int profit;
} object;
using namespace std;
bool mycomp(object a,object b){
    return (a.profit/double(a.weight))>(b.profit/double(b.weight));
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<object> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i].weight;
    for(int i=0;i<n;i++) cin>>arr[i].profit;
    sort(arr.begin(),arr.end(),mycomp);
    double sum=0;
    for(auto i:arr){
        if(i.weight<=m){
            sum+=i.profit;
            m-=i.weight;
        }
        else{
            sum+=(m/double(i.weight))*i.profit;
            m=0;
            break;
        }
    }
    cout<<sum<<endl;
    
}