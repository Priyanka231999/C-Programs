///4. Accept N numbers from user and display all such elements which are divisible by 3 and 5.
///Input : N : 6
///Elements : 85 66 3 15 93 88
///Output : 15
//////////////////////////////////////////////////////////
#include<stdio.h>

void div3and5(int Arr[],int iLength)
{
    int i;

      for(i=0;i<iLength;i++)
    {
       if((Arr[i]%3==0)&&(Arr[i]%5==0))
       {

          printf("%d",Arr[i]);
       }

    }

}

int main()
{
    int iSize,iCnt;
    int *p=NULL;

    printf("Enter iSize=");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize*sizeof(int));

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    div3and5(p,iSize);
    free(p);
    return 0;
}
