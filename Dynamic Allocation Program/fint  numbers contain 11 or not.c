///Accept N numbers from user check whether that numbers contains 11 in it or not.
///Input : N : 6
///Elements : 85 66 11 80 93 88
///Output : 11 is present
///Input : N : 6
///Elements : 85 66 3 80 93 88
///Output : 11 is absent
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int bool;
bool chk11(int Arr[],int iLength)
{
     int i;
     for(i=0;i<iLength;i++)
    if(Arr[i]==11)
    {
    return 1;
    }
    else
    {
    return 0;
    }


}

int main()
{
  int iRet=0;int iSize=0;int iCnt;
  int *p=NULL;

  printf("Enter number=");
  scanf("%d",&iSize);

  p=(int *)malloc(iSize*sizeof(int));

  for(iCnt=0;iCnt<iSize;iCnt++)
  {
     scanf("%d",&p[iCnt]);
  }
  iRet=chk11(p,iSize);
  if(iRet==TRUE)
  {
      printf("it contain 11");

  }
  else
  {
  printf("it does not contain 11");
  }

  free(p);
  return 0;
}
