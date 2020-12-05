///Name:Priyanka P.Khandagale
///Write a program which accept number from user and display all its non factors.
///Input : 12
///Output : 5 7 8 9 10 11
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void NonFactor(int iNo)
{
   int i;
    if(iNo<0)
    {
        return;
    }
    for(i=iNo;i>=i;i--)
    {
       if(iNo%i!=0)
       {
          printf("%d ",i);
       }
    }
}
 int main()
{
   int number;
   printf("enter number=");
   scanf("%d",&number);
   NonFactor(number);
   return 0;
}
