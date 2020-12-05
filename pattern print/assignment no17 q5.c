///Accept number of rows and number of columns from user and display below pattern.
///Input : iRow = 4 iCol = 4
///Output : 1 2 3 4
///2 3 4 5
///3 4 5 6
///4 5 6 7
///////////////////////////////////////////////////////////
void pattern(int iRaw,int iCol)
{
     int i=1,j=1;
     int iDig=j;
   for(i=1;i<=iRaw;i++)
   {
       int ino=1;
      for(j=1;j<=iCol;j++)
      {

          if(i%2!=0)
          {
              printf("%d ",j);
          }
         if(i%2==0)
          {

              printf("%d ",i);

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
