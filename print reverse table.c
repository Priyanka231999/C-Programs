/// Write a program which accept number from user and display its table in reverse order.
///Input : 2
///Output : 20 18 16 14 12 10 8 6 4 2
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
 void Revtable(int iNo)
 {
     int i;
     for(i=10;i>=1;i--)
     {
        printf("%d ",i*iNo);
     }
 }

 int main()
 {
    int number;
   printf("Enter number=");
   scanf("%d",&number);
   Revtable(number);
   return 0;
 }
