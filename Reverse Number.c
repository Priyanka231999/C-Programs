///1.Write a program which accept number from user and display its digits in reverseorder.
///Input : 2395
///Output : 5
///9
///3
///2
///////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Reverseorde(int iNo)
{
    int iRem=0;
   while(iNo!=0)
   {
   iRem=iNo%10;
  iNo=iNo/10;
   printf("%d",iRem);
   }
   iNo--;



}

int main()
{
  int number;
   printf("Enter number=");
   scanf("%d",&number);
    printf("Reverse numbers are=");
   Reverseorde(number);

   return 0;
}
