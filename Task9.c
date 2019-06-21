#include <stdio.h>
#include <stdlib.h>

//Task 9 Write a C program to find the factorial of a number

int main()
{
    int num;
    printf("\nEnter the number you would like to find the factorial of \n");
    scanf("%d",&num);
    int myfactorial=1;
    for(int i=1;i<=num;i++)
        {
            myfactorial*=i;
        }
    printf("\nThe factorial of the given number is %d",myfactorial);

    return 0;
}
