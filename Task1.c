#include <stdio.h>
#include <stdlib.h>

//Task 1 Write a C program to accept the name, age and phone number of a person and then display them back
int main()
{
    int age;
    char name[25];
    char phoneno[10];
    printf("\nEnter your name\n");
    scanf("%s",&name);
    printf("\nEnter your age\n");
    scanf("%d",&age);
    printf("\nEnter your phone number\n");
    scanf("%s",&phoneno);

    printf("\nYour name is %s\n",name);
    printf("\nYour age is %d\n",age);
    printf("\nYour phone number is %s \n",phoneno);
    return 0;
}
