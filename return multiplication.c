///Write a program which accept number from user and return multiplication of all digits.
///Input : 2395
///Output : 270
///Input : 1018
///Output : 8
//////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultiplicationOfallNumber(int iNo)
{
    int mult=1;
    while(iNo!=0)
   {
       int iRem;
   iRem=iNo%10;
  mult=mult*iRem;
   iNo=iNo/10;

   }
   iNo--;
   return mult;
}

int main()
{
   int number,iRes=0;
   printf("Enter number=");
   scanf("%d",&number);

  iRes= MultiplicationOfallNumber(number);
   printf("Multiplication are =%d",iRes);
   return 0;
}
