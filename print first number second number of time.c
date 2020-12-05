/// Accept two numbers from user and display first number in second number of times.
///Input :  12 5 Output : 12 12 12 12 12

#include<stdio.h>

void display(int no1,int no2)
{
       int i;
       if(no2<0)
       {
          no2=-no2;//updater
       }

      for(i=1;i<=no2;i++)
      {
          printf(" %d",no1);
      }
}
int main()
{
     int first,second;
     printf("enter first number=");
     scanf("%d",&first);
     printf("enter second number=");
      scanf("%d",&second);
      display(first,second);
      return 0;

}
