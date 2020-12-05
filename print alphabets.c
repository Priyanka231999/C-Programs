//Accept number from user and display below pattern.
//Input : 5
//Output : A B C D E

#include<stdio.h>

void PrintAlphabet(int iNo)
{
  int i;
  char ch='A';
  for(i=1;i<=iNo;i++)
  {
  printf("%c",ch);
  ch++;
  }
}
int main()
{
  int number,iRes=0;
   printf("Enter number=");
   scanf("%d",&number);

   PrintAlphabet(number);

   return 0;
}
