/// Accept number of rows and number of columns from user and display below pattern.
///Input : iRow = 4 iCol = 4
///Output :
///1 2 3 4
///5 6 7 8
///9 1 2 3
///4 5 6 7
//////////////////////////////////////////////////////////////////////////////////////////////////////
void pattern(int iRaw,int iCol)
{
     int i=1,j=1;
     int iDig=j;
   for(i=1;i<=iRaw;i++)
   {
      for(j=1;j<=iCol;j++)
      {
          if(iDig<10)
          {
               printf("%d ",iDig);
               iDig++;
               if(iDig>=10)
               {
                   iDig=1;
               }
          }

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
