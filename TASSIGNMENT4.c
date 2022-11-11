#include<stdio.h>

void main() {

    int n, sum=1, firstdigit, lastdigit;

    printf("Enter any number to find sum of first and last digit:");
    scanf("%d", &n);



    lastdigit=n%10;

    while(n>=10) {

            n=n/10;

        }
        firstdigit=n;



    sum=firstdigit+lastdigit;

    printf("Sum of first and last digit=%d", sum);





}
