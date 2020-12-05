/////1.Write a program which accept number from user and display its multiplication of factors.
/////Input : 12
/////Output : 144 (1 * 2 * 3 * 4 * 6)
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int multfact(int iNo)
{
     //updater
     int i,mult=1;;
     for(i=1;i<=iNo/2;i++)
     {
       if(iNo%i==0)4

       {
           mult=mult*i;
       }

     }
     return mult;

}

int main()
{
     int number,iRes;
   printf("enter number=");
   scanf("%d",&number);
   iRes=multfact(number);
   printf("Multiplication of Factors is=%d",iRes);
   return 0;
}
