/* program for strong number*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int digits=0;
    int temp=n;
    int sum=0;
    while(temp!=0){
        int fact=1;
        int digit=temp%10;
        for(i=2;i<=digit;i++) fact=fact*i;
        sum=sum+fact;
        temp/=10;
    }
    (sum==n)?printf("strong number"):printf("not a strong number");   
}