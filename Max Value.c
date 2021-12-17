#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variable define
    int arr[ ]={9,4,3,5,6,8,7,10,18,2}, i, Index, maxVal=arr[0];

    //for loop initialize
    for (i=1;i<10;i++)
    {
        //checking value
        if(maxVal>arr[i])
        {
            //storing larger value in a variable
            maxVal=maxVal;
        }
        else
        {
            //storing larger value in a variable
            maxVal=arr[i];
            //index setup
            Index=i;
        }
    }
    //printing value
    printf("Maximum Value is: (%d)\n", maxVal );
    printf("Index of Maximum Value is: (%d)\n", Index );



    return 0;
}
