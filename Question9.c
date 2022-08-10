#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("Enter the three number: ");
    scanf("%d %d %d",&a, &b, &c);
    max=a>=b?a:b;
    max>=c?printf("The greatest no. is %d", max):printf("The greatest no. is %d", c);

    return 0;
}