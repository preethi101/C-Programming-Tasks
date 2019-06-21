#include <stdio.h>
#include <stdlib.h>


//Task 5 Write a C program to find the reverse of a given number
int main()
{
    int num;
    int reverse = 0;
    int rem;

    printf("Enter the number you would like to reverse:\n ");
    scanf("%d", &num);

    while(num != 0)
    {
        rem = num%10;
        reverse = reverse*10 + rem;
        num = num/10;
    }

    printf("\nThe number reversed is \t %d", reverse);

    return 0;
}
