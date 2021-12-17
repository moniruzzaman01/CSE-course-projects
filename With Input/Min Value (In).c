
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    int length=0;
    int arr[length], i;
    //Input section
    printf("Enter the length of  array: ");
    scanf("%d", &length);
    printf("Enter values of array: ");
    for(i=0;i<length;i++)
    {
        scanf("%d", &arr[i]);
        printf("hello%d\n", i);
    }


    return 0;
}
