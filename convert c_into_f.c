//wap to convert temperature celsius into fahrenheit//
#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("Enter temperature in celsius:");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("convert temperature celsius into fahreheit: %f",fahrenheit);
    return 0;

}