
#include <stdio.h>
// target: 67,6,5,4,3,2,1

// 7
// 1,2,3,4,5,6,67
// 67,2,3,4,5,6,1
// 67,6,3,4,5,2,1
// 67,6,5,4,3,2,1

void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {
        // swap item arr[i] with arr[6-i]
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("Before reversing the array\n");
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
    arrayRev(arr);
    printf("\nAfter reversing the array\n");
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }

    return 0;
}