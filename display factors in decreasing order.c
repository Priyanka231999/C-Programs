////////////////////////////
////Name:Priyanka P. Khandagale
////Write a program which accept number from user and display its factors in decreasing order.
////Input : 12
////Output : 6 4 3 2 1
////////////////////////////

#include<stdio.h>

void decresingorderfact(int iNo)
{
    int i;
    if(iNo<0)
    {
        return;
    }
    for(i=iNo;i>=i;i--)
    {
       if(iNo%i==0)
       {
          printf("%d ",i);
       }
    }
}

int main()
{
   int number;
   printf("enter number=");
   scanf("%d",&number);
  decresingorderfact(number);
   return 0;
}
