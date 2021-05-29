/*program which outputs a day*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x=n%7;
    if(x==1) printf("Friday");
    else if(x==2) printf("Saturday");
    else if(x==3) printf("Sunday");
    else if(x==4) printf("Monday");
    else if(x==5) printf("Tuesday");
    else if(x==6) printf("Wednesday");
    else  printf("Thursday");
}