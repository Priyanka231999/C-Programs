///1. Accept N numbers from user and return the largest number.
///Input : N : 6
///Elements : 85 66 3 66 93 88
///Output : 93
/////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void largeNumber(int Arr[],int iLength)
{
    int i;
    int a=0;a=Arr[0];
    for(i=1;i<iLength;i++)
    {
       if(a>Arr[i])
       {
       printf("%d",a);
       }

    }
}

int main()
{
   int isize,iCnt;
   int *p=NULL;

   printf("Enter Number=");
   scanf("%d",&isize);

   p=(int*)malloc(isize*sizeof(int));

   for(iCnt=0;iCnt<isize;iCnt++)
   {
      scanf("%d",&p[iCnt]);
   }
   largeNumber(p,isize);
   free(p);
   return 0;
}
