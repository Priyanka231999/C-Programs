///Write a program which accept number from user and if number is less than 50 then print small , if it is greater than 50 and less than 100 then print medium, if it is
//greater than 100 then print large.
//////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void chkNumber(int iNo)
{
   int i;
   if(iNo<50)
   {
      printf("small");
   }
   else if(iNo>=50&&iNo<100)
   {
      printf("medium");
   }
   else if(iNo>=100)
   {
      printf("large");
   }
}

int main()
{
   int number;
   printf("Enter number=");
   scanf("%d",&number);
   chkNumber(number);
   return 0;
}
