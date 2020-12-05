///Accept number from user and display below pattern.
///Input : 5
///Output : 5 # 4 # 3 # 2 # 1 #
////////////////////////////////////////////////////

#include<stdio.h>

void pattern(int iNo)
{
    int i;
    for(i=1;i<=iNo;i++)
    {
        printf("%d # ",i);
    }

}

int main()
{
   int number;

  printf("Enter value=");
  scanf("%d",&number);
  pattern(number);

}
