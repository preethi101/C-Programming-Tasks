#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Task 4 Write a program to read the first and last name of a user and display them as one string

int main()
{
    char fname[25],lname[25];
    printf("\nEnter the first name\n");
    gets(fname);
    printf("\nEnter the last name\n");
    gets(lname);
    char fullname[50];

    //We use the built in function strcat to concatenate the two strings
    strcat(fname,lname);

    printf("\nThe two strings together give %s",fname);

    return 0;
}
