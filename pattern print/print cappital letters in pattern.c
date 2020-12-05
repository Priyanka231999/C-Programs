///3. Accept number of rows and number of columns from user and display below pattern.
///Input : iRow = 3 iCol = 5
///Output :
/// A A A A A
///B B B B B
///C C C C C
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void pattern(int iRaw,int iCol)
{
     int i,j;
     char cChar='A';

   for(i=1;i<=iRaw;i++)
   {
      for(j=1;j<=iCol;j++)

      {
       printf("%c",cChar);


      }
      cChar++;

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
