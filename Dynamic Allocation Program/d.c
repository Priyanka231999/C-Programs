///1. Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
///Input : N : 6
///Elements : 85 66 3 80 93 88
///Output : 53 (234 - 181)
//////////////////////////////////////////////////////
#include<stdio.h>
#include<malloc.h>
int Differance(int Arr[],int iSize)
{
    int Even=0,Odd=0,iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {

        if((Arr[iCnt]%2)==0)
        {
           Even=Even+Arr[iCnt];
        }
       else if((Arr[iCnt]%2)!=0)
        {
           Odd=Odd+Arr[iCnt];
        }

    }
     return (Even-Odd);
}
int main()
{
   int iRet=0,iCnt=0,iNumber;
   int *p=NULL;

   printf("Enter Amount of number=");
   scanf("%d",&iNumber);

   p=(int *)malloc(iNumber*sizeof(int));

   if(p==NULL)
   {
       printf("Enable to locate memory");
       return -1;
   }

   printf("Enter numbers are=\n");
   for(iCnt=0;iCnt<iNumber;iCnt++)
   {
      scanf("%d",&p[iCnt]);

   }
   iRet=Differance(p,iNumber);
   printf("Differance is %d",iRet);
   free(p);
   return 0;
}

