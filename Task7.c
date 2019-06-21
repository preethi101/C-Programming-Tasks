#include <stdio.h>
#include <stdlib.h>

//Task 7 Write a C program to check whether a given number is a palindrome or not
int main()
{
    char myword[50];
    printf("\nEnter the string\n");
    scanf("%s",&myword);
    int i;
    for(i=0;myword[i]!='\0';i++)
    {

    }
    int len=i;
    char reverse[50];
    for(int j=len-1,k=0; j>=0; j--,k++)
    {
        reverse[k]=myword[j];
    }
    int flag=0;
    for(int i=0;i<len;i++)
    {
        if(reverse[i]!=myword[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {

        printf("\nThe word is not a palindrome");
    }
    else if(flag==0)
    {
        printf("\nThe word is a palindrome");
    }
    return 0;
}
