#include<bits/stdc++.h>
using namespace std;
#define Ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int evensubsetsum(int arr[],int n,int count){
   if(n==2){
       if(arr[n-1]%2==0&&arr[n-2]%2==0){
           count+=3;
        }else if(arr[n-1]%2!=0||arr[n-2]%2!=0)
            count+=1;
   
        return count;
   }
   else{    
       if(arr[n-1]%2==0)
            return evensubsetsum(arr,n-1,count+1);

   }

}


int main(){

}