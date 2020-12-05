///Write a program which accepts N from user and print all odd numbers up to N.
///Input : 18
///Output : 1 3 5 7 9 11 13
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintOddNum(int iNo)
{
   int i;
   for(i=1;i<=iNo;i++)
   {
       if(i%2!=0)
       {
       printf("%d ",i);
       }

   }

}

int main()
{
   int number;
   printf("Enter number=");
   scanf("%d",&number);
   PrintOddNum(number);
   return 0;
}
