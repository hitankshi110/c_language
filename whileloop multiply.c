#include<stdio.h>

void main() {

    int num, count=1, even, odd;

    printf("Enter any  num: ");
    scanf("%d", &num);

    printf("\n even number is %d : \n\n");
    printf("\n odd number is %d : \n\n");


    while(count<=num) {

            if(count %2==0) {

                printf("even number is %d \n", count);
                count++;

            }else if(count %2==1) {

                printf("odd number is %d \n", count);
                count++;

            }


    }



}
