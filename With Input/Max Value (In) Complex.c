#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000 // size limit of array

int main()
{
    //Variable define
    int length=0, i, Index=0;
    int arr[MAX_SIZE], maxValue;
    char comma;
    //Landing page information
    printf("Hey Welcome.\n");
    printf("Press Enter After Putting Every Value\n--------------------------\n");
    //Input Section
    printf("Enter the length of the array:-");
    scanf("%d", &length);
    printf("Enter values of array:-\n");
    for(i=0;i<length;i++)
    {
        scanf("%d", &arr[i]);
    }
    //Logic Section
    maxValue=arr[0];
    for(i=1;i<length;i++)
    {
        //Checking max value
        if(maxValue>arr[i])
        {
            maxValue=maxValue;
        }
        else
        {
            maxValue=arr[i];
            Index=i;
        }
    }
    //Output Section
    //Printing the input array
    printf("-----Result-----\n");
    printf("Your array is:{");
    for(i=0;i<length;i++)
    {
        //fixing comma problem in array while showing
        if(i<length-1){comma=',';}else{comma='}';}

        printf("%d%c", arr[i], comma);
    }
    printf("\n");
    //Printing the maximum value and index
    printf("Maximum value is: (%d)\nIndex of maximum value is: (%d)", maxValue, Index);


    return 0;
}









