#include <stdio.h>
int main() 
{
    double numberOne, numberTwo, product;
    scanf("%lf %lf", &numberOne, &numberTwo);  
    product = numberOne * numberTwo;
    printf("%.2lf", product);
}