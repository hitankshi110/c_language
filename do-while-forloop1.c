#include<stdio.h>

void main() {

    int i=1, num;

        printf("Enter a num :");
        scanf("%d", &num);
         printf("\n Multiplication Table of %d is : \n\n");

   do {


    printf("%d*%d=%d \n", i, num, (i*num));

    i++;

}   while(i<=10);
    printf("\nEND");





}
