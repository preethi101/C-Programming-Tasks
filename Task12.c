#include <stdio.h>
#include <stdlib.h>

//Task 12 WRITE A C PROGRAM TO DISPLAY THE FOLLOWING OPTIONS :
//1. CELCIUS TO FAHRENHEIT, 2. FAHRENHEIT TO CELCIUS, 3. EXIT.
//PERFORM THE RELEVANT OPERATION USING SWITCH CASE.
int main()
{
    int choice;
    printf("Main Menu\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Exit");
    printf("\nEnter your choice");
    scanf("%d",&choice);
    int fahr,celsius;
    switch(choice)
    {
    case 1:
        printf("\nEnter the temperature in Celsius\n");
        scanf("%d",&celsius);
        fahr=(celsius*(9/5))+32;
        printf("\nThe temperature in fahrenheit is %d",fahr);
        break;
    case 2:
        printf("\nEnter the temperature in Fahrenheit\n");
        scanf("%d",&fahr);
        celsius=(fahr-32)*(5/9);
        printf("\nThe temperature in Celsius is %d",celsius);
        break;
    case 3:
        exit(0);
        break;
    default:
        printf("\nYou have entered an invalid option");
        break;
    }
    return 0;
}
