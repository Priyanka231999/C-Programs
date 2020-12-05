///Accept N numbers from user and display all such elements which are divisible by 5.
///Input : N : 6
///Elements : 85 66 3 80 93 88
///Output : 85 80
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
 void div5(int *Arr,int iNum)
 {
    int i;
    for(i=0;i<iNum;i++)
    {
      if(Arr[i]%5==0)
      {
          printf("%d",Arr[i]);
      }
    }

 }

 int main()
 {
     int iSize,iCnt;
     int *p=NULL;

     printf("Enter Number= ");
     scanf("%d",&iSize);
     p=(int *)malloc(iSize*sizeof(int));

     if(p==NULL)
     {
     printf("enable to locate memmory ");
     return -1;
     }

     for(iCnt=0;iCnt<iSize;iCnt++)
     {
        printf("% number are=",iCnt+1);
        scanf("%d",p[iCnt]);
     }
      printf("Divisible number are=");
     div5(p,iSize);
     free(p);

 }
