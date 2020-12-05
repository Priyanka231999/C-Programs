///Accept N numbers from user and accept one another number as NO , return frequency of NO form it.


///Input : N : 6
///NO: 66
///Elements : 85 66 3 66 93 88
///frequency=1
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int FindFreq(int Arr[],int iLength,int iNo)
{
    int i,iFreq;

      for(i=0;i<iLength;i++)
    {
       if((Arr[i]==iNo))
       {

          iFreq++;
       }


    }
                 return iFreq;
}

int main()
{
    int iSize,iCnt,iRet=0,Fnumber;
    int *p=NULL;

    printf("Enter iSize=");
    scanf("%d",&iSize);
    printf("enter that number which is finding number=");
     scanf("%d",&Fnumber);

    p=(int *)malloc(iSize*sizeof(int));
    printf("Enter numbers=");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

   iRet= FindFreq(p,iSize,Fnumber);
    free(p);
     printf("Frequency are=%d",iRet);


    return 0;
}
