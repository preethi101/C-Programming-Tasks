#include <stdio.h>
#include <stdlib.h>

//Task 13- Write a C program to find the smallest and largest element in your array
int main()
{
    int len,myarray[30];
    printf("\nEnter the number of elements in your array");
    scanf("%d",&len);
    printf("\nEnter the elements of your array");
    int i;
    for(i=0; i<len; i++)
    {
        scanf("\n%d",&myarray[i]);
    }

    int mini=myarray[0],maxi=myarray[0];

    for(i=0; i<len; i++)
    {
        if(mini>myarray[i])
        {
            mini=myarray[i];
        }
        if(maxi<myarray[i])
        {
            maxi=myarray[i];
        }

    }

    printf("\nThe smallest element in the array is %d",mini);
    printf("\nThe largest element in the array is %d",maxi);

    return 0;
}
