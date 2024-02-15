/** 
 * C program to check even or odd using functions
 */

#include <stdio.h>


/**
 * Function to check even or odd
 * Returns 1 is num is even otherwise 0
 */
int isEven(int num)
{
    return !(num & 1);
}


int main()
{
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    if(isEven(num))
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
    
    return 0;
}