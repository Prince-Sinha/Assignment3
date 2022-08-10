#include<stdio.h>
int main(){
    int a,b,c,dis;
    printf("Enter the coffecient of x2: ");
    scanf("%d",&a);
    printf("Enter the  coffecient of x: ");
    scanf("%d",&b);
    printf("Enter the  coffecient of constant term: ");
    scanf("%d",&c);
    dis=(b*b-4*a*c)
    if(dis>0){
        printf("The roots are real and disinct");
    }
    if else(dis==0){
        printf("The roots are real and equal");
    }
    else{
        printf("The roots are imaginary");
    }


    return 0;
}