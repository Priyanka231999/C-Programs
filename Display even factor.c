///Write a program which accept number from user and print even factors of that number
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void evenFactor(iNo)
{
   int i;
   for(i=1;i<=iNo/2;i++)
   {
      if(iNo%i==0)
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
   evenFactor(number);
   return 0;
}
