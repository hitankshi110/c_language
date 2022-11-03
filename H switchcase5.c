#include<stdio.h>


void main() {

    char country='I';

    printf("Enter your country char: ");

    scanf(" %c", &country);

    switch(country) {

    case 'U':
        printf("This is USA \n");
        break;

    case 'A':
        printf("This is Australia \n");
        break;

    case 'I':
        printf("This is Indonesia \n");
        break;

    case 'E':
        printf("This is England \n");
        break;

    case 'C':
        printf("This is Canada \n");
        break;


    default:
        printf("This is INDIA \n");

    }

}










