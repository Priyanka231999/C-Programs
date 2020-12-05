///Name:Priyanka P.Khandagale
/// Write a program which accept number from user and print even factors of that number.
///Input : 36
///Output: 2 6 12 18
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void evenFaact(int iNo)
{
   int i;
   for(i=1;i<=iNo/2;i++)
   {
      if((iNo%i==0)&&(i%2==0))
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
   evenFaact(number);
   return 0;
}
