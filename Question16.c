#include<stdio.h>
int main(){
  int ch;
  printf("Enter the character or digit: ");
  scanf("%c",&ch);
  if(ch >= 65 && ch <= 90)
		printf("Alphabet is in Uppercase");
  else if(ch >= 97 && ch <= 122)
		printf("Aphabet is in Lowercase");
  else if(ch >= 48 && ch <= 57)
		printf("It is a number");
  else
		printf("It is a special character");

    return 0;
}