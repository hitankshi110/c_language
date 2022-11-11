#include<stdio.h>

void main()
{

    int count=0, n;

    printf("Enter a number:");
    scanf("%d", &n);

        while(n!=0)
        {
            n=n/10;
            count++;
        }

        printf("\n The number of digits in an integer is: %d", count);



    }






