#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter the marks of 5 subject out of 100: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a+b+c+d+e>=165){
        printf("You are passed");
    }
    else{
        printf("You are fail");
    }
    
    return 0;
}