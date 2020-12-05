///Accept number of rows and number of columns from user and display below pattern.
///Input : iRow = 3 iCol = 4
///Output :
///* # * #
///* # * #
///* # * #
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void pattern(int iRaw,int iCol)
{
     int i,j;
   for(i=1;i<=iRaw;i++)
   {
      for(j=iCol;j>=1;j--)
      {
        if(j%2!=0)
        {
            printf("#",j);
        }
        else
        {
             printf("*",j);
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

