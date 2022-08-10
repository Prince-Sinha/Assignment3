#include<stdio.h>
int main(){
  int a;
  printf("Enter the number: ");
  scanf("%d",&a);
  a%5==0?printf("The no. is divisble by 5"):printf("The no. is not divisble by 5");

    return 0;
}