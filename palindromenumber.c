#include <stdio.h>

int palindromenumber(int num) {
    /* Here we are generating a new number (reverse_num)
    * by reversing the digits of original input number
    */
   int reverse_num=0, remainder,temp;
   temp=num;
   while(temp!=0)
   {
      remainder=temp%10;
      reverse_num=reverse_num*10+remainder;
      temp/=10;
   } 

   /* If the original input number (num) is equal to
    * to its reverse (reverse_num) then its palindrome
    * else it is not.
    */ 
   if(reverse_num==num) 
      return 0;
   else
      return 1;
}