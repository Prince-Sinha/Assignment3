#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    a>=b?printf("The greatest number is %d",a):printf("The greatest number is %d",b);
    
  return 0;
}