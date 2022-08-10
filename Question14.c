#include<stdio.h>
int main(){
  int a;
  printf("Enter the number: ");
  scanf("%d",&a);
  if(a%7==0 && a%3==0){
    printf("The no. is divisble by 7 and 3");
    }
  else if(a%7==0){
    printf("The no. is  divisble by 7");
  }
 else if(a%3==0){
    printf("The no. is divisible by 3");
  }
  else{
    printf("The no. is not divisible by 3 or 7 ");
  }
  

    return 0;
}