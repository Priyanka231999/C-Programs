////////////////////////////////////////////////////////////////////////////
///////Name:Priyanka p.Khandagale
//////program Name: Accept one number and check whether is is divisible by 5 or not.
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOOL;
define TRUE 1;
define FALSE 0;

int divno(int num)
{
    if(num<0)
    {
        return -1;
    }
    if(num%5=0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    int no;
    printf("Enter number=");
    scanf("%d",&no);
    a=divno(no);
    if(a==TRUE)
    {
        printf("number is divisible by 5");
    }
    else
    {
         printf("number is not divisible by 5");
    }


    return 0;

}
