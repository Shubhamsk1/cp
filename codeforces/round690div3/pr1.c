/*program for single digit sum*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==0||n==9) printf("%d",n);
    else printf("%d",n%9); 
}