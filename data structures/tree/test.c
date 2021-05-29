#include<stdio.h>
int main(){
    char arr[]={'p','a','n','k','a','j','\0'};
    char *ptr="pankaj";
    char name[]="pankaj";
    printf("%d %d %d",sizeof(arr),sizeof(ptr),sizeof(name));
}