#include<stdio.h>

void main() {

    int n, reversed=0, remainder, original;
    printf("Enter an Integer: ");
    scanf("%d", &n);
    original=n;

    while(n!=0) {

        remainder=n%10;
        reversed=reversed*10+remainder;
        n/=10;
    }

        if(original==reversed) {

                printf("%d is palindrome.", original);

        }else{
             printf("%d is not palindrome.", original);




        }



        }

