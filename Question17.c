#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter the lenght of sides: ");
    scanf("%f%f%f",&a &b &c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("It is a triangle");
    }
    else{
        printf("It is not a triangle");
    }



    return 0;
}