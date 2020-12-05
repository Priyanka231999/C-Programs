///Write a program which accept number from user and count frequency of 2 in it.
///Input : 2395
///Output : 1
///Input : 1018
///Output : 0
///////////////////////////////////////////////////////////////////////////////////////

int count(int iNo,int iCntno)
{
    int ifrequency=0;
    while(iNo!=0)
   {
       int iRem;
   iRem=iNo%10;
   if(iRem==iCntno)
   {
     ifrequency++;
   }
   iNo=iNo/10;

   }
   iNo--;
   return ifrequency;
}
int main()
{
   int number,countingNo,iRes;
   printf("Enter number=");
   scanf("%d",&number);
   printf("Enter that number whose frquency want you to count=");
   scanf("%d",&countingNo);
   iRes=count(number,countingNo);
   printf("Frequency count are=%d",iRes);
   return 0;
}
