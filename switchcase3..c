#include<stdio.h>

void main() {

    char shapes='C';

    printf("Enter your shapes char: ");
    scanf(" %c", &shapes);

    switch(shapes) {

    case'C':
        printf("It is a Circle \n");
        break;

    case'S':
        printf("It is a Square \n");
        break;

    case'R':
        printf("It is a Rectangle \n");
        break;

    case'T':
        printf("It is a Triangle \n");
        break;

    case'D':
        printf("It is a Diamond \n");
        break;

    default:
        printf("It is a Shape \n");

    }

}
