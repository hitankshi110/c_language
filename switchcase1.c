#include<stdio.h>

void main() {

    char country='A';

        printf("Enter your country char: ");
        scanf(" %c", &country);

        switch(country) {

        case'A':
            printf("It is Australia \n");
            break;

        case'E':
            printf("It is Europe \n");
            break;

        case'I':
            printf("It is Italy \n");
            break;

        case'C':
            printf("It is Canada \n");
            break;

        case'U':
            printf("It is USA \n");
            break;

        default:
            printf("It is India \n");

        }

}
