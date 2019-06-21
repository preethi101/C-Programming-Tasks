#include <stdio.h>
#include <stdlib.h>

//Task 8 Write a C program to read an integer and print its multiplication table

int main()
{
    int num;
    printf("\nEnter a number\n");
    scanf("%d",&num);
    printf("\nThe multiplication table of this number is \n");
    for(int i=1;i<=10;i++)
    {
        int multiply=i*num;
        printf("\n%d * %d = %d",num,i,multiply);
    }
    return 0;
}
