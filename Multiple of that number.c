///Write a program which accept N and print first 5 multiples of N.
///Input : 4
///Output : 4 8 12 16 20
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleNum5(int iNo)
{
   int i;
   for(i=1;i<=5;i++)

   {
     printf("%d ",iNo*i);
   }
}

int main()
{
    int number;
   printf("Enter number=");
   scanf("%d",&number);
   MultipleNum5(number);
   return 0;
}
