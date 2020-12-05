///Name:Priyanka P.Khandagale
///Write a program which accept number from user and return summation of all its non factors.
///Input : 12
///Output : 50
///Input : 10
///Output : 37
////////////////////////////////////////////////////////////////////

#include<stdio.h>
void NonFactorsummation(int iNo)
{
   int i,sum=0;
    if(iNo<0)
    {
        return;
    }
    for(i=iNo;i>=i;i--)
    {
       if(iNo%i!=0)
       {
          sum=sum+i;
       }
    }
     printf("summation=%d",sum);
}
 int main()
{
   int number,ires;
   printf("enter number=");
   scanf("%d",&number);
   NonFactorsummation(number);

   return 0;
}
