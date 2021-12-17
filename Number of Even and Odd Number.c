#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variable define
    int arr[ ]={9,8,7,6,5,4,3,2,1,10}, i, Even=0, Odd=0, SumOdd=0, SumEven=0;

    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            Even=Even+1;
            SumEven=SumEven+arr[i];
        }
        else
        {
            Odd=Odd+1;
            SumOdd=SumOdd+arr[i];
        }
    }

    //printing value
    printf("Number of Even is: (%d)\n", Even);
    printf("Number of Odd is: (%d)\n", Odd);
    printf("Sum of Even: (%d)\n", SumEven);
    printf("Sum of Odd: (%d)\n", SumOdd);




    return 0;
}
