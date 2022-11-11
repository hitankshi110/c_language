#include<stdio.h>

void main() {

    int i, count=1, num;

    printf("Enter a number");
    scanf("%d", &num);

    for(i=1;i<=num;i++) {

        count=count*i;

    }

      printf("\n Factorial of %d is %d", num, count);


}
