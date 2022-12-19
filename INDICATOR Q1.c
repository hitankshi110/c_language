#include<stdio.h>

void main()
{
    int x, y, *a, *b, swap;

    printf("Enter the value of x and y \n");
    scanf("%d %d", &x, &y);


    printf("Number before swapping \n x=%d\n y=%d\n", x, y);

    a=&x;
    b=&y;

    swap = *b;
    *b = *a;
    *a = swap;

    printf("After swapping \n x=%d\n y=%d\n", x,y);



}
