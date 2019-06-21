#include <stdio.h>
#include <stdlib.h>

//Task 11 Write a C program to create a structure called BOOK with certain variables and create methods to accept and display the values of these variables


struct BOOK{
char title[50],author[50],genre[50];

}obj1;

void disp(struct BOOK obj)
{
    printf("\nThe title is: %s",obj.title);
    printf("\nThe author is: %s",obj.author);
    printf("\nThe genre is: %s",obj.genre);
}

struct BOOK accept()
{
    struct BOOK B1;
    printf("\nEnter the following values for your book");
    printf("\nThe title:  ");
    scanf("%[^\n]%*c",B1.title);
    printf("\nThe author:  ");
    scanf("%[^\n]%*c",&B1.author);
    printf("\nThe genre:  ");
    scanf("%[^\n]%*c",&B1.genre);

    return B1;
}

int main()
{

    obj1=accept();
    disp(obj1);
    return 0;
}
