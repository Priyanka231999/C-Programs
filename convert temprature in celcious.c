/// Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9))
///Input :  10 Output :  -12.2222 (10 - 32) * (5/9))
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double ConvertTemp(float fTemp)
{
    double celcius=0.0;
    celcius=((fTemp-32) *(5/(float)9)) ;///typecast:implicite type coversion :in the expression 5 and 9 both are both operand are integer type then the result of expression is that type i.e 0.00 nd they consider only 0 because they considerd as integer type so presion part is neglected but using mix type od datatype then result type is considerd as bigger datatype(float>int)
///thats y reslt in float type.
    return celcius;
}

int main()
{
  float Ftemprature=0.0;
  double iRes=0.0000;
  printf("enter Temprature=");
  scanf("%f",&Ftemprature);
  iRes=ConvertTemp(Ftemprature);
  printf("Temprature=%lf",iRes);
 // printf(" %f in fahrenheight is equal to %lf celcius",Ftemprature,iRes);

}

