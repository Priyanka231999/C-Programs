///Accept N numbers from user and accept one another number as NO , return index of last occurrence of that NO.
///Input : N : 6
///NO: 66
///Elements : 85 66 3 66 93 88
///Output : 3
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>


 void lastoccurance(int Arr[],int iLength,int iNo)

{
     int i;
     for(i=(iNo);i>=0;i++)
     {
     if(Arr[i]==iNo)
     {
          printf("%d",i);

     }
     }

     }


int main()
{
   int iSize,iCnt,iRet,iNumber;
   int *p=NULL;

   printf("Enter size=");
   scanf("%d",&iSize);
    printf("Enter finding Number=");
    scanf("%d",&iNumber);

    p=(int *)malloc(iSize*sizeof(int));

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    lastoccurance(p,iSize,iNumber);

    free(p);
    return 0;
}

