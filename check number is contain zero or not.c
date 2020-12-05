///Write a program which accept number from user and check whether it contains 0
///in it or not.
///Input : 2395
///Output : There is no Zero
///Input : 1018
///Output : It Contains Zero
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>


#define  true 1
#define  false 0
typedef int BOOL;
 BOOL checkZero(int iNo)
{
   int i;
   while(iNo!=0)
   {
       int iRem;
       iRem=iNo%10;
       if(iRem==0)
       {
           return 1;
       }
       iNo=iNo/10;
   }
   iNo--;
}
int main()
{
    int number,iRes;
   printf("Enter number=");
   scanf("%d",&number);

   iRes=checkZero(number);

   if(iRes==true)
   {
       printf("it contain zero");

   }
   else
   {
       printf("it does contain zero");
   }

   return 0;
}
