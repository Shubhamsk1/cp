#include<bits/stdc++.h>
using namespace std;
 void sortColors(vector<int>& nums) {
        int low=0;
        int mid=0,high=nums.size()-1;
        while(mid<=high){
            switch (mid)
            {
            case 0: swap(nums[low++],nums[mid++]);
                    break;
            case 1: mid++;
                    break;
            case 2: swap(nums[high--],nums[mid]);
                    break;
            }
        }
    }
int main(){
    vector<int> p;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        p.push_back(t);
    }
    sortColors(p);
    for(int i=0;i<p.size();i++)cout<<p[i]<<" ";
}