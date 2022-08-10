#include<stdio.h>
int main(){
    int a;
    printf("Enter the year: ");
    scanf("%d",&a);
    if((a%4==0 && a%100!=0) || a%400==0){
        printf("The year is leap year");
    }
    else{
        printf("The year is not leap year");
    }

    return 0;
}