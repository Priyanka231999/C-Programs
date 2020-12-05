/////1. Accept number of rows and number of columns from user and display below pattern.
/////Input : iRow = 4 iCol = 4
/////Output : A B C D
/////A B C D
/////A B C D
/////A B C D
//////////////////////////////////////////////////////////
#include<stdio.h>

void pattern(int iRaw,int iCol)
{
     int i,j;
      int c='A';
   for(i=1;i<=iRaw;i++)
   {
      for(j=1;j<=iCol;j++)
      {
        printf("%c",c);
        c++;

      }
      c='A';
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
