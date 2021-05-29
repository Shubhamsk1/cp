/*program to print table of n*/
#include<stdio.h>
int main(){
    int n,i; 
    scanf("%d",&n);
    printf("Table of %d :\n",n);
    for(i=1;i<=10;i++){
        printf(" %d * %d=%d\n",n,i,n*i);
    }
}