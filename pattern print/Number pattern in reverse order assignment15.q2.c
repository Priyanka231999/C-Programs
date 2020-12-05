/// Accept number of rows and number of columns from user and display below pattern.
///Input : iRow = 3 iCol = 5
///Output :
///5 4 3 2 1
///5 4 3 2 1
///5 4 3 2 1
////////////////////////////////////////////////////////
///Accept number of rows and number of columns from user and display below pattern.
///Input : iRow = 4 iCol = 3
///Output : 1 2 3
///1 2 3
///1 2 3
///1 2 3
///////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void pattern(int iRaw,int iCol)
{
     int i,j;
   for(i=1;i<=iRaw;i++)
   {
      for(j=iCol;j>=1;j--)
      {
        printf("%d",j);

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
