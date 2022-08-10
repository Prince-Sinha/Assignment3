#include<stdio.h>
int main(){
  int a;
  printf("Enter the number: ");
  scanf("%d",&a);
  a%2==0 && a%3==0?printf("The no. is divisble by 2 and 3"):printf("The no. is not divisble by 2 and 3");

    return 0;
}