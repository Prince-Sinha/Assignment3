#include<stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    a>0?printf("The entered number is positive"):printf("The entered no. is non-positive");
    
    return 0;
}