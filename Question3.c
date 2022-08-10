#include<stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    a%2==0?printf("The entered number is even"):printf("The entered no. is odd");
    
    return 0;
}