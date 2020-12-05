 ////////////////////////////////////////////////////////////////////////////
///////Name:Priyanka p.Khandagale
//////program Name:Program to print 5 to 1 numbers on screen
///////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 void PrintRevNo(int no)
 {
     int i;
     if(no<0)
     {
         return -1;
     }
     for(i=no;i>=1;i--)
     {
       printf("%d\n",i);
     }
 }

 int main()
 {
    int number;
    printf("Enter number=");
    scanf("%d",&number);
    PrintRevNo(number);

    return 0;

 }
