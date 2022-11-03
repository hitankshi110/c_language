#include<stdio.h>

void main() {

    char month='J';

    printf("Enter your month char: ");
    scanf(" %c", &month);

    switch(month) {

    case 'J':
        printf("This is January \n");
        break;

    case 'F':
        printf("This is February \n");
        break;

    case 'M':
        printf("This is March \n");
        break;

    case 'A':
        printf("This is April \n");
        break;

    case 'm':
        printf("This  is May \n");
        break;

    case 'j':
        printf("This is June \n");
        break;

    default:
        printf("This is a month \n");

    }

}
