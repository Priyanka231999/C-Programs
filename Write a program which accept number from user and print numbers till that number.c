/////Write a program which accept number from user and print numbers till that number.
////Input : 8
////Output : 1 2 3 4 5 6 7 8
/////////////////////////////////////////////////////////////////////////////
void PatternPrint(int iNo)
{
    int i;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    i=1;
     while(i<=iNo)
     {
         printf(" %d ",i);
         i++;
     }
}

int main()
{
   int number;
   printf("Enter number=");
   scanf("%d",&number);
   PatternPrint(number);
   return 0;
}
