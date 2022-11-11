#include<stdio.h>

void main() {

    int num, count=1;

    printf("Enter a num: ");
    scanf("%d", &num);

    printf("\n Multiplication Table of %d is: \n\n");

    while(count<=10) {

        printf("%d*%d=%d \n", num,count, (num*count));

        count++;

    }
}
