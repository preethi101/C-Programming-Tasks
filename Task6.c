#include <stdio.h>
#include <stdlib.h>

//Task 6 Write a C program to check if a given number is an Armstrong number or no
int main()
{
    int num;
    printf("Please enter the number\n");
    scanf("%d",&num);
    int n=sizeof(num)-1;
    int tempnum=num;
    int armstrong=0;
    for(int i=0;i<n;i++)
    {
        int rem;
        rem=tempnum%10;
        int add=1;
        for(int j=0;j<n;j++)
        {
            add*=rem;
        }
        armstrong+=add;
        tempnum=tempnum/10;
    }

    if(armstrong==num)
    {
        printf("\nThe given number is an armstrong number");
    }
    else
    {

        printf("\nThe given number is NOT an armstrong number");
    }
    return 0;
}
