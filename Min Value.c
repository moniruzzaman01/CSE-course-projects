#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    int arr[]={1,5,3,2,6,7,-9,0,8}, i, minVal=arr[0], Index;

    //loop initialization
    for(i=1;i<9;i++)
    {
        //condition check
        if(minVal<arr[i])
        {
            //min value store in a variable
            minVal=minVal;
        }
        else
        {
            //min value store in a variable
            minVal=arr[i];
            //index setup
            Index=i;

        }
    }

    //print the minimum value
    printf("Minimum Value is: (%d)\n", minVal);
    printf("Index of Minimum Value is: (%d)\n", Index);



    return 0;
}
