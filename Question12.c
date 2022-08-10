#include<stdio.h>
int main() {
   char ch;
   printf("Enter The Character : ");
   scanf("%c", &ch);
   if (ch >= 'A' && ch <= 'Z')
      printf("Character is Upper Case ");
   else
      printf("Character is Lower Case ");
 
   return 0;
}