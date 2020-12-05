#include<stdio.h>
#include<stdlib.h>
 int main()
 {
    int i=0,number;
    int *p=NULL;

    printf("enetr  count of number:\n");
    scanf("%d",&number);
    p=(int *)malloc(number*sizeof(int));

    printf(" %d numbers are:\n",number);
    for(i=0;i<number;i++)
    {
     printf("enter %d elements= ",i+1);///i+1 kel karan i 0 la pont krtoy mg statment distana as disel enter elements are=0 je nit nahi dist mhanun i+1=0+1 mhnj 1
      scanf("%d",&p[number]);///that is enter elements are=1
    }
    for(i=0;i<number;i++)
    {
         printf("%d",p[number]);
    }
    return 0;
 }
