/* Program to check if a number is palindrome or not
 * using while loop
 */

#include <stdio.h>
#include "palindromenumber.h"

int main()
{
   int num, reverse_num=0, remainder,temp;
   printf("Enter an integer: ");
   scanf("%d", &num);

   int const ret = palindromenumber(num);
   if(ret == 0) 
      printf("%d is a palindrome number",num);
   else
      printf("%d is not a palindrome number",num);
   return 0;
}