#include<stdio.h>
int main(){
    int a;
    printf("Enter the month number: ");
    scanf("%d",&a);
    if(a==1){
        printf("Numbers of days is 31");
    }
    else if(a==2){
        printf("Numbers of days is 28 or 29");
    }
    else if(a==3){
        printf("Numbers of days is 31");
    }
    else if(a==4){
       printf("Numbers of days is 30");
    }
    else if(a==5){
       printf("Numbers of days is 31");
    }
    else if(a==6){
        printf("Numbers of days is 30");
    }
    else if(a==7){
        printf("Numbers of days is 31");
    }
    else if(a==8){
        printf("Numbers of days is 31");
    }
    else if(a==9){
        printf("Numbers of days is 30");
    }
    else if(a==10){
        printf("Numbers of days is 31");
    }
    else if(a==11){
       printf("Numbers of days is 30");
    }
    else if(a==12){
        printf("Numbers of days is 31");
    }
    return 0;
}