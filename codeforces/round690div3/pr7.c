/*program to find how many bits are different in binary of two given numbers*/
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a^b;
    int count=0;
    for(;c!=0;c>>=1) if(c&1) count++;
    printf("Number of bits which are different :%d",count);
}