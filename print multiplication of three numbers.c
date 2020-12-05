////Write a program which accept three numbers and print its multiplication.
///Input : 5 4 7
///Output : 140
///Input : 5 0 7
///Output : 35

int multiplication(int n1,int n2,int n3)
{
    int mult;
    mult=n1*n2*n3;
    return mult;

}

int main()
{
    int no1,no2,no3,iRes;
    printf("Enter number:");
    scanf("%d %d %d",&no1,&no2,&no3);
    iRes=multiplication(no1,no2,no3);
    printf("Multiplication:%d",iRes);
     return 0;
}
