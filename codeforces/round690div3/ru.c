/* program for contiguous ones*/
#include<stdio.h>
#include<math.h>
int main(){
    unsigned int n;
    scanf("%d",&n);
    int maxOnes=0;
    int ones=0;
    while(n!=0){
        if(n&1) ones++;
        else{
            maxOnes=(maxOnes>ones)?maxOnes:ones;
            ones=0;
        }
        n=n>>1;
    }
    maxOnes=(maxOnes>ones)?maxOnes:ones;
    printf("Maximum number of contiguous ones are:%d",maxOnes);
}