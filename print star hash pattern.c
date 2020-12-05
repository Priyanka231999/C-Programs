///Write a program which accept number from user and display below pattern.
///Input : 5
///Output : * * * * * # # # # #
///Input : 6
///Output : * * * * * * # # # # # # #
///Input : -5
///Output : * * * * * # # # # #
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void starhashpattern(int iNo)
{
     int i;
     for(i=1;i<=iNo*2;i++)
     {
        if(i<=(iNo*2)/2)
        {
        printf("* ");
        }
        else
        {
        printf("# ");
        }
     }
}

int main()
{
   int number;
   printf("Enter number=");
   scanf("%d",&number);
   starhashpattern(number);
   return 0;
}
