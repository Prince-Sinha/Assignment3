#include<stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a&1==1){
        printf("The given no. is odd");
    }
    else{
        printf("The given no. is even");
    }

    return 0;
}