/// Accept number of rows and number of columns from user and display below pattern.
///Input : iRow = 5 iCol = 5
///Output : a b c d e
///1 2 3 4 5
///a b c d e
///1 2 3 4 5
///a b c d e
//////////////////////////////////////////////////////////////////////
void pattern(int iRaw,int iCol)
{
     int i=1,j=1;
     char schar='a';
   for(i=1;i<=iRaw;i++)
   {

      for(j=1;j<=iCol;j++)
      {

          if(i%2!=0)
          {
              printf("%d",j);
          }
         if(i%2==0)
          {

              printf("%c",schar);
             schar++;
          }

      }
      schar='a';
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
