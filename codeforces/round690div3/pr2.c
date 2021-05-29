/*program for no of digits in a number*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x=log10(n)+1;
    printf("%d",x);
}