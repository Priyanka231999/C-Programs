/// Accept N numbers from user and return frequency of even numbers.
///Input : N : 6
///Elements : 85 66 3 80 93 88
///Output : 3
#include<stdio.h>

int freqCount(int Arr[],int iLength)
{
    int i,ifreq=0;

      for(i=0;i<iLength;i++)
    {
       if((Arr[i]%2==0))
       {

          ifreq++;
       }

    }
                 return ifreq;
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

   iRet= freqCount(p,iSize);
    free(p);
     printf("Frequency are=%d",iRet);
    return 0;
}
