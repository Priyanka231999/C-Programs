#include<stdio.h>

void numberLine(int iNo)
{
    int i;
    for(i=-iNo;i<=iNo;i++)
    {


             printf("%d ",i);


    }

}

int main()
{
   int number;
   printf("Enter number=");
   scanf("%d",&number);
   numberLine(number);
   return 0;
}
