///Accept N numbers from user and accept one another number as NO ,return index of first occurrence of that NO.
///Input : N : 6
///NO: 66
///Elements : 85 66 3 66 93 88
///Output :1
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void ReturnIndex(int Arr[],int iLength,int iNo)
{
    int i;

      for(i=0;i<iLength;i++)
    {
       if(Arr[i]==iNo)
       {

          printf("%d",i);
       }
       else
       {

           return -1;
       }

    }

}

int main()
{
    int iSize,iCnt,iNo;
    int *p=NULL;

    printf("Enter iSize=");
    scanf("%d",&iSize);

     printf("Enter finding Number=");
    scanf("%d",&iNo);

    p=(int *)malloc(iSize*sizeof(int));

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    ReturnIndex(p,iSize,iNo);
    free(p);
    return 0;
}
