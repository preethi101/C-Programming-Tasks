#include <stdio.h>
#include <stdlib.h>

//Task 2 Write a C program to accept a temperature in Celsius and display it in Fahrenheit
int main()
{
    float celsius;
    printf("\nEnter the temperature in Celsius\n");
    scanf("%f",&celsius);
    float fahrenheit;
    fahrenheit=((9*(celsius))/5)+32;
    printf("\nThe temperature in fahrenheit is %f",fahrenheit);
    return 0;
}
