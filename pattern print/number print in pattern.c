///Accept number of rows and number of columns from user and display below pattern.
///Input : iRow = 4 iCol = 5
///Output :
///4 4 4 4 4
///3 3 3 3 3
///2 2 2 2 2
///1 1 1 1 1
///////////////////////////////////////////////////////////////////////////////

void pattern(int iRaw,int iCol)
{
     int i,j;
    int iDig=iRaw;

   for(i=1;i<=iRaw;i++)
   {
      for(j=1;j<=iCol;j++)

      {
       printf("%d",iDig);


      }
      iDig--;

      printf("\n");
   }
}
int main()
{
   int Rnumber,Cnumber;

  printf("Enter Raw Number=");
  scanf("%d",&Rnumber);
   printf("Enter Column Number=");
  scanf("%d",&Cnumber);
  pattern(Rnumber,Cnumber);
  return 0;

}
