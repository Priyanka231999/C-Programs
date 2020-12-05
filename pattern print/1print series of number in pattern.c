///Accept number of rows and number of columns from user and display below pattern.
///Input : iRow = 3 iCol = 4
///Output :
/// 1 2 3 4
///5 6 7 8
///9 10 11 12
////////////////////////////////////////////////////////////////////////
void pattern(int iRaw,int iCol)
{
     int i=1,j=1;
     int iDig=j;
   for(i=1;i<=iRaw;i++)
   {
      for(j=1;j<=iCol;j++)
      {
        printf("%d ",iDig);
        iDig++;
      }

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
