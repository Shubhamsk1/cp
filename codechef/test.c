#include<stdio.h>
int main(){
    int a[2]={
        #include "hello.txt"
    };
    int i;
    for(i=0;i<2;i++) printf("%d",a[i]);
}
