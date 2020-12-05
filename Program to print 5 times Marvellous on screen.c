////////////////////////////////////////////////////////////////////////////
///////Name:Priyanka p.Khandagale
//////program Name:Program to print 5 times “Marvellous” on screen
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int print(int no)
{
  int i;
  for(i=1;i<=no;i++)
  {
    printf("Marvellous\n");
  }
}
int main()
{
  int number;
  printf("Enter number=");
  scanf("%d",&number);
  print(number);

  return 0;

}
