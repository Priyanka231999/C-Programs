//Write a program which accept number from user and return difference between summation of all its factors and non factors.

#include<stdio.h>

int DifferanceOfSummation(int iNo)
{
    int i,sum1=0,sum2=0,diff;
    for(i=1;i<=iNo;i++)
    {
    if(iNo%i==0)
    {
      sum1=sum1+i;
    }
      if(iNo%i!=0)
    {
      sum2=sum2+i;
    }

    }
    diff=sum1-sum2;
    return diff;
}

void main()
{
   int number,ires;
   printf("enter number=");
   scanf("%d",&number);
 ires= DifferanceOfSummation(number);
   printf("summation=%d",ires);
   return 0;
}
