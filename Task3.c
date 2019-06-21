#include <stdio.h>
#include <stdlib.h>

//Task 3 Write a C program to take the marks in 3 subjects and display the sum and average
int main()
{
    int marks1,marks2,marks3;
    printf("\nEnter the marks in subject 1\n");
    scanf("%d",&marks1);
    printf("\nEnter the marks in subject 2\n");
    scanf("%d",&marks2);
    printf("\nEnter the marks in subject 3\n");
    scanf("%d",&marks3);

    int sum, avg;
    sum=(marks1+marks2+marks3);
    avg=sum/3;
    printf("\nThe sum of the marks is %d",sum);
    printf("\nThe average of the marks is %d",avg);
    return 0;
}
