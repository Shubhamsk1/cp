/*program to swap first and last digit*/
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int b= n%10;
    int x=log10(n)+1;
    int a=n/pow(10,x-1);
    n=n/10;
    x--;
    int temp=ceil(pow(10,x-1));
    n=n%temp;
    temp=ceil(pow(10,x));
    x--;
    n=b*temp+n*10+a;
    printf("output: %d",n);
}