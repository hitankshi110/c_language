#include<stdio.h>

void main()
{
    int REV=100;
    int size, i, arr[REV];
    int *ptr;

    ptr=&arr[0];

    printf("Enter the size of array : ");
    scanf("%d", &size);

    printf("Enter %d integers into array: \n", size);
    for(i=0; i<size; i++)
    {
        printf("Enter %d integer into array: ", i+1);
        scanf("%d", ptr);
        ptr++;
    }

    ptr=&arr[size-1];

    printf("\n Elements of array in reverse order: \n");

    for(i=size-1; i>=0; i--){
        printf("\n Elements of %d is %d ", i+1, *ptr);
        ptr--;
    }

}
