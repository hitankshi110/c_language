#include<stdio.h>

void main() {

    char month='J';

    printf("Enter your month char: ");

    scanf(" %c", &month);

    switch(month) {

    case 'J':
        printf("This is July \n");
        break;

    case 'A':
        printf("This is August \n");
        break;

    case 'S':
        printf("This is September \n");
        break;

    case 'O':
        printf("This is October \n");
        break;

    case 'N':
        printf("This is November \n");
        break;

    case 'D':
        printf("This is December \n");
        break;

    default:
        printf("This is a month \n");

    }

}
