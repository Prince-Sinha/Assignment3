#include<stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    if(a/100==0 || a/100>9){
        printf("The given no. is not three digit number");
    }
    else{
        printf("The given no. is three digit number");
    }
    

    return 0;
}