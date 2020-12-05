///2. Accept number of rows and number of columns from user and display below pattern.
////Input : iRow = 4 iCol = 4
///Output : A B C D
///a b c d
///A B C D
///a b c d
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void pattern(int iRaw,int iCol)
{
     int i,j;
     char cChar='A';
     char sChar='a';
   for(i=1;i<=iRaw;i++)
   {
      for(j=1;j<=iCol;j++)

      {
        if(i%2==0)
        {
           printf("%c",cChar);
           cChar++;
        }
        else
        {
            printf("%c",sChar);
            sChar++;
        }


      }
      cChar='A';
      sChar='a';
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
