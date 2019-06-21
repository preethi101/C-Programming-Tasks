#include <stdio.h>
#include <stdlib.h>

//Task 10 Write a C program to print the given pyramid
int main()
{
    int myarray[5]={1,2,3,4,5};
    int len=5;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<len; j++)
        {
            printf("%d",myarray[j]);
        }
        printf("\n");
        len-=1;
    }
    return 0;
}
