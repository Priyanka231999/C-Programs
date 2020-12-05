////////////////////////////////////////////////////////////////////////////
///////Name:Priyanka p.Khandagale
//////program Name:Devide 2 numbers
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Devide(int num1,int num2)
{
    int division;
   if(num2<0)
   {
      return -1;
   }
   else
   {
      division=num1/num2;
   }
   return division;
}

int main()
{
    int no1,no2,Div;
    printf("Enter 1st number=");
    scanf("%d",&no1);
    printf("Enter 2nd number=");
    scanf("%d",&no2);
    Div=Devide(no1,no2);
     printf("division=%d",Div);


    return 0;

}
