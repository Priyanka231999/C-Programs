///Write a program which accept number from user and print that number of $ & * on screen.
//Input : 5
//Output : $ * $ * $ * $ * $ *
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PatternPrint(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
     while(iNo>0)
     {
         printf("$ * ");
         iNo--;
     }
}

int main()
{
   int number;
   printf("Enter number=");
   scanf("%d",&number);
   PatternPrint(number);
   return 0;
}
