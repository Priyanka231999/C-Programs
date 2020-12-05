///Accept N numbers from user and return difference between frequency of even number and odd numbers.
///Input : N : 7
///Elements : 85 66 3 80 93 88 90
///Output : 1 (4 -3)
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int DiffEvenOddFreq(int Arr[],int iLength)
{
    int i,iEven=0,iOdd=0;

      for(i=0;i<iLength;i++)
    {
       if((Arr[i]%2==0))
       {

          iEven++;
       }
       else
       {
       iOdd++;
       }

    }
                 return iEven-iOdd;
}

int main()
{
    int iSize,iCnt,iRet=0;
    int *p=NULL;

    printf("Enter iSize=");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize*sizeof(int));
    printf("Enter numbers=");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

   iRet= DiffEvenOddFreq(p,iSize);
    free(p);
     printf("Differance are=%d",iRet);
     printf("iffeare=%d",iRet);
     printf("are=%d",iRet);
    return 0;
}
