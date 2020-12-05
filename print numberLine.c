///// Write a program which accept number from user and print its numbers line.
/////Input : 4
/////Output : -4 -3 -2 -1 0 1 2 3 4
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void numberLine(int iNo)
{
    int i;
    for(i=iNo;i>=0;i--)
    {


             printf("%d ",-i);


    }
    for(i=i;i<=iNo;i++)
    {


             printf("%d ",i);


    }

}

int main()
{
   int number;
   printf("Enter number=");
   scanf("%d",&number);
   numberLine(number);
   return 0;
}
